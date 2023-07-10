#include <stdio.h>
#include <stdlib.h>
#include "tomb.h"

int main()
{
    int *x,*a,*b,n=5;
    srand(time(0));
    Letrehozas(&x,n);
    Letrehozas(&a,n);
    Letrehozas(&b,n);
    Feltoltes(x,n,5,15);
    Feltoltes(a,n,10,20);
    Feltoltes(b,n,1,10);
    printf("Az elso tomb: ");
    Kiiras(x,n);
    printf("\n");
    printf("A masodik tomb: ");
    Kiiras(a,n);
    printf("\n");
    printf("A harmadik tomb: ");
    Kiiras(b,n);
    printf("\n");
    Bub1(x,n);
   printf("Bubi1: "); Kiiras(x,n);
   printf("\n");
    Bub2(a,n);
   printf("Bubi2: "); Kiiras(a,n);
   printf("\n");
    Bub3 (b,n);
   printf("Bubi3: "); Kiiras(b,n);
    return 0;
}
