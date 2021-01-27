#include<stdio.h>
#include "rpic.h"

void horizontalAnimation(int x, int y, int s);
void verticalAnimation(int x, int y, int s);

int main()
{

    rubs();
    int m, n, s;
    printf("Enter x coordinate for H anim-->");
    scanf("%d", &m);
    printf("Enter y coordinate for H anim-->");
    scanf("%d", &n);
    printf("Enter steps-->");
    scanf("%d", &s);
    rubs();
    printf("Starting Horizontal Animation...");
    sleep(1);
    rubs();
    hk;
    horizontalAnimation(m, n, s);
    e;
    sk;
    printf("Enter x coordinate for V anim-->");
    scanf("%d", &m);
    printf("Enter y coordinate for V anim-->");
    scanf("%d", &n);
    printf("Enter steps-->");
    scanf("%d", &s);
    rubs();
    printf("Starting Vertical Animation...");
    rubs();
    hk;
    verticalAnimation(m, n, s);
    rubs();
    sk;
    printf("Thankyou, for using this animation program...\n");
}

void horizontalAnimation(int x, int y, int s)

{
    do
    {

        moveto(x, y);
        show('*');
        sleep(1);
        moveto(x, y);
        hide();
        x++;
        s--;
    } while (s > 0);
}

void verticalAnimation(int x, int y, int s)

{
    int i = 0;
    do
    {
        moveto(x, y);
        show('*');
        sleep(1);
        moveto(x, y);
        hide();
        y++;
        i++;
    } while (i < s);
}