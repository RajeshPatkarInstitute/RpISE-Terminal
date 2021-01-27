#include<time.h>
#include<stdio.h>
#include<termios.h>
#include "rpic.h"

//k represents cursor.

#define hk hideCursor()
#define sk showCursor()
#define fc(x) foregroundColor(x)
#define bc(x) backgroundColor(x)
#define s  show()
#define h  hide()
#define e  rubs()
#define mk(x,y) moveto(x,y)
#define r  read()
#define re reade()
#define d(x)  sleep(x)

enum Praman{tathya=1,vitathya=0};

typedef struct termios term;
typedef enum Color Color;

/* Rub the content on the Screen */

void rubs(){
   putchar(27);putchar('[');putchar('2');putchar('J');
   moveto(1,1);
}

/* show a given character at the current cursor position */

void show(char ch){ 
    putchar(ch); 
    fflush(stdout); 
}

void hide(){
   putchar(' ');
   fflush(stdout);
}

/* Hide Cursor */

void hideCursor(){
   char es[6] = {27,'[','?','2','5','l'};
   for(int i = 0; i <= 5; i++) putchar(es[i]); 
}

/* Show Cursor */

void showCursor(){
   char es[6] = {27,'[','?','2','5','h'};
   for(int i = 0; i <= 5; i++) 
       putchar(es[i]); 
}

/* Set Foreground Color */

void foregroundColor(Color foreground){
   char es[5] = {27,'[','3',(char)foreground,'m'};
   for(int i = 0; i < 5; i++) putchar(es[i]);
}

/* Set Background Color */
void backgroundColor(Color background){
    putchar(27);putchar('[');putchar('4');putchar(background);putchar('m');
    char es[5] = {27,'[','4',(char)background,'m'};
    for(int i = 0; i < 5; i++) putchar(es[i]);
}

void sleep (unsigned int secs) {
   unsigned int retTime = time(0) + secs;
   while (time(0) < retTime);
}

void moveto(int x, int y){
   char xstr[3]={'0','0','\0'};
   char ystr[3]={'0','0','\0'}; 
   sprintf(xstr,"%d",x);
   sprintf(ystr,"%d",y);
   putchar(27);putchar('[');
   int i = 0 ;
   for(;i<3&&ystr[i]!='\0';i++){
       putchar(ystr[i]);
   }
   putchar(';');
   i = 0 ;
   for(;i<3&&xstr[i]!='\0';i++){
       putchar(xstr[i]);
   }
   putchar('H');
   fflush(stdout);
}

/* Read a character from keyboard. pressing Enter not required */

int getkey(enum Praman syutam){
    term current, noncanonical;
    int data;
    tcgetattr(0, &current);
    noncanonical = current;
    noncanonical.c_lflag = noncanonical.c_iflag & ((syutam )? ~(ICANON | ECHO): ~ICANON);
    tcsetattr(0, TCSANOW, &noncanonical );
    data = getchar();
    tcsetattr(0, TCSANOW, &current);
    return data;
}

/* Read a character Without Echo */

int read(void){
    return getkey(tathya);
}

/* Echo Read */

int eread(void){ 
    return getkey(vitathya);
}