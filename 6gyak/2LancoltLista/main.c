#include <stdio.h>
#include <stdlib.h>
#include "2LancoltLista.h"
int main()
{


	PELEM2*a=NULL;
    a=insertLast(a,1);
    a=insertLast(a,2);
    a=insertLast(a,10);
    a=insertLast(a,13);
    Print(a);
    a=insertFirst(a,0);
    Print(a);
    a=insertOrdered(a,5);
    Print(a);
    a=Delete(a,5);
    Print(a);
    DestroyL(a);
    a=NULL;
    Print(a);
    return 0;
}
