#include<time.h>
#include<stdio.h>
#include<termios.h>
#include "rpic.h"



enum Praman{tathya=1,vitathya=0};

typedef struct termios term;
typedef enum Col Color;

/* Rub the content on the Screen */

void rubs(){
   putchar(27);putchar('[');putchar('2');putchar('J');
   move(1,1);
}

void scup(){
    putchar(27);putchar('[');putchar('s');
}

void ucup(){
    putchar(27);putchar('[');putchar('u');
}

/* show a given character at the current cursor position */

void rite(char ch){ 
    scup();
    putchar(ch); 
    ucup();
    fflush(stdout); 
}

void raze(){
    rite(' ');
}

/* Hide Cursor */

void hide(){
   char es[6] = {27,'[','?','2','5','l'};
   for(int i = 0; i <= 5; i++) putchar(es[i]); 
}

/* Show Cursor */

void show(){
   char es[6] = {27,'[','?','2','5','h'};
   for(int i = 0; i <= 5; i++) 
       putchar(es[i]); 
}

/* Set Foreground Color */

void fcol(Col foreground){
   char es[5] = {27,'[','3',(char)foreground,'m'};
   for(int i = 0; i < 5; i++) putchar(es[i]);
}

/* Set Background Color */
void bcol(Col background){
    putchar(27);putchar('[');putchar('4');putchar(background);putchar('m');
    char es[5] = {27,'[','4',(char)background,'m'};
    for(int i = 0; i < 5; i++) putchar(es[i]);
}

void wait(unsigned int secs) {
   unsigned int retTime = time(0) + secs;
   while (time(0) < retTime);
}

void move(int x, int y){
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
    scup();
    char ch = getkey(tathya);
    ucup();
    return ch;
}

/* Echo Read */

int reed(void){ 
    scup();
    char ch = getkey(vitathya);
    ucup();
    return ch;
}