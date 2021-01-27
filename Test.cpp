#include<stdio.h>
#include "rpic.h"

extern void horizontalAnimation(int x, int y, int s);
extern void verticalAnimation(int x, int y, int s);

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
    wait(1);
    rubs();
    hide();
    horizontalAnimation(m, n, s);
    rubs();
    show();
    printf("Enter x coordinate for V anim-->");
    scanf("%d", &m);
    printf("Enter y coordinate for V anim-->");
    scanf("%d", &n);
    printf("Enter steps-->");
    scanf("%d", &s);
    rubs();
    printf("Starting Vertical Animation...");
    rubs();
    hide();
    verticalAnimation(m, n, s);
    rubs();
    show();
    printf("Thankyou, for using this animation program...\n");
}

void horizontalAnimation(int x, int y, int s)
{
    do
    {
        move(x, y);
        rite('*');
        wait(1);
        raze();
        x++;
        s--;
    } while (s > 0);
}

void verticalAnimation(int x, int y, int s)
{
    int i = 0;
    do
    {
        move(x, y);
        rite('*');
        wait(1);
        raze();
        y++;
        i++;
    } while (i < s);
}