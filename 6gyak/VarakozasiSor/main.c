#include <stdio.h>
#include <stdlib.h>
#include "VarakozasiSor.h"
int main()
{


    /*VSOR* h;
    h=CreateV();
    Push(h,10);
    Push(h,11);
    Push(h,12);
    printf("%d\n",Pop(h));
    PrintV(h);*/
    ESOR* g;
    g=CreateE();
    Push1(g,10);
    Push1(g,4);
    Push1(g,1);
    printf("%d\n",Top1(g));
    Print1(g);
    return 0;
}
