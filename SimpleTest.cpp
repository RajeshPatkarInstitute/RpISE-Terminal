#include "rpic.h"
#include <stdio.h>

int main(){
    hide();
    rubs();
    move(5,5);
    rite('*');
    char ch = read();
    move(10,10);
    rite(ch);
    read();
    move(10,10);
    attr('5');attr('4');
    for(int i=0 ;i < 5; i++){
        rite('$');head();wait(1);
    }
    for(int i=0 ;i < 5; i++){
        rite('$');up();wait(1);
    }
    attr('7');
    for(int i=0 ;i < 5; i++){
        rite('$');back();wait(1);
    }
    attr('2');
    for(int i=0 ;i < 5; i++){
        rite('$');down();wait(1);
    }
    attr('0');
    printf("Hello\n");
    printf("bye\n");
    printf("good");
    read();
    rubl();
    read();
    show();
}