#include <stdio.h>
#include <stdlib.h>
#include "BinarisFa.h"

typedef struct FAELEM {
    int adat;
    struct FAELEM * bal, * jobb, * szulo;
}FAELEM;


FAELEM * Create(int n)
{
    FAELEM* A=(FAELEM*)calloc(1,sizeof(FAELEM));
    A->adat=n;
    A->bal=NULL;
    A->jobb=NULL;
    A->szulo=NULL;

    return A;
}


void Destroy(FAELEM* A)
{
    free(A->szulo);
    free(A->jobb);
    free(A->bal);
    free(A->adat);
    free(A);
}

FAELEM * CreateFa(A)
{
    return NULL;
}


FAELEM * Insert(FAELEM* A, int c)
{

}
