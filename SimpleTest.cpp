#include "rpic.h"

int main(){
    rubs();
    move(5,5);
    rite('*');
    char ch = read();
    move(10,10);
    rite(ch);
    read();
    move(10,10);
    for(int i=0 ;i < 5; i++){
        rite('$');head();wait(1);
    }
    for(int i=0 ;i < 5; i++){
        rite('$');up();wait(1);
    }
    for(int i=0 ;i < 5; i++){
        rite('$');down();wait(1);
    }
    for(int i=0 ;i < 5; i++){
        rite('$');back();wait(1);
    }

}