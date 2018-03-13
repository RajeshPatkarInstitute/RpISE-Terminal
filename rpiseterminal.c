#include<time.h>
#include "rpiseterminal.h"


void eraseDisplay(){
   putchar(27);putchar('[');putchar('2');putchar('J');
   gotoxy(1,1);
}

void show(char ch){ 
    putchar(ch); 
    fflush(stdout); 
}

void hide(){
   putchar(' ');
   fflush(stdout);
}

void hideCursor(){
   char es[6] = {27,'[','?','2','5','l'};
   for(int i = 0; i <= 5; i++) 
       putchar(es[i]); 
}

void showCursor(){
   char es[6] = {27,'[','?','2','5','h'};
   for(int i = 0; i <= 5; i++) 
       putchar(es[i]); 
}

void setForegroundColor(Color foreground){
   char es[5] = {27,'[','3',foreground,'m'};
   for(int i = 0; i < 5; i++)
       putchar(es[i]);
}

void setBackgroundColor(Color background){
    putchar(27);putchar('[');putchar('4');putchar(background);putchar('m');
    char es[5] = {27,'[','4',background,'m'};
   for(int i = 0; i < 5; i++)
       putchar(es[i]);
}

void sleep (unsigned int secs) {
   unsigned int retTime = time(0) + secs;
   while (time(0) < retTime);
}

void gotoxy(int x, int y){
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
