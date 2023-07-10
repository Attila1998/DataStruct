#include <stdio.h>
#include <stdlib.h>
#include "seged.h"
#include <conio.h>
int main()
{
    /*
    0-ut
    1-fal
    2-eger
    3-sajt
    */
    const char*fn={"be.txt"};
    LAB*a;
    LAB1D*b;
    b=Create1D(fn);
    a=Create(fn);
    char ch;
    do
    {
        Print(a);
        ch=getch();
        MOVE(a,ch);
        system("cls");

    }   while(Solve(a)!=1);

    printf("VICTORY!");
    Destroy(a);
    printf("\n");
    system("pause");
     do
    {
        Print1D(b);
        ch=getch();
        MOVE1D(b,ch);
        system("cls");

    }   while(Solve1D(b)!=1);

    printf("VICTORY!");
    return 0;
}
