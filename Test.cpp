#include "rpic.h"

int main(){
    rubs();
    int x = 5;
    int y = 5;
    moveto(x,y);
    show('*');
    int i = 0;
    while(i < 10){
        hide();
        x++;y++;
        i++;
        moveto(x,y);
        show('*');
        sleep(1);
    }
    read();
    rubs();
}