#include <stdlib.h>
#include <stdio.h>
#include "tomb.h"


int main()
{ int *b,m=6,*x,n=5;
    srand(time(0));
    Letrehozas(&x,n);
    //Letrehozas2(&b,m);
    Feltoltes(x,n,1,15);
    //Feltoltes(b,m,5,20);
    Kiiras(x,n);
    //printf("\n");printf("2.tomb: ");Kiiras(b,m);

    printf("Minimum: ");printf("%i",Minimum(x,n));
    printf("\n");
    printf("Maximum: ");printf("%i",Maximum(x,n));
    printf("\n");
    Kereses(x,n,15);
    printf("\n");
    Rendezes(x,n);
    Kiiras(x,n);
    return 0;
}
