#include <stdio.h>
#include <stdlib.h>
#include "LancoltLista.h"
int main()
{
    PELEM*a=NULL;
    a=insertLast(a,4);
    Print(a);
    a=insertLast(a,5);
    Print(a);
    a=insertLast(a,1);
    a=insertLast(a,2);
    Print(a);
    a=insertFirst(a,0);
    Print(a);
    a=insertOrdered(a,10);
    Print(a);
    a=Delete(a,4);
    Print(a);
    Destroy(a);

    printf("Rendezve:");
    a=SortL(a);
    Print(a); 


    return 0;
}

