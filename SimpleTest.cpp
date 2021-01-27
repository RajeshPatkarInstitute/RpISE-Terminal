#include "rpic.h"

int main(){
    rubs();
    move(5,5);
    rite('*');
    char ch = read();
    move(10,10);
    rite(ch);
    read();
}