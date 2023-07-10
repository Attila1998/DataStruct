#include <stdlib.h>
#include <stdio.h>
#include "Hash.h"


ELEM*Create(char n)
{
    ELEM*a=(ELEM*)calloc(1,sizeof(ELEM));
    a->szo=n;
    a->next=NULL;
    return a;
}


void Destroy(ELEM*a)
{
    if(a!=NULL)
    {
        free(a->next);
        free(a);
    }
}
