#include <stdlib.h>
#include <stdio.h>
#include "tomb.h"

IntArrey* Create(int n)
{
    IntArrey* A=(IntArrey*)calloc(1,sizeof(IntArrey));
    A->size=n;
    A->elements=(int*)calloc(n,sizeof(int));
    return A;
}

void Destroy(IntArrey* A)
{
    free(A->elements);
    free(A);
}

int Put(IntArrey* A, int x, int b)
{
    A->elements[x]=b;
}

int Get(IntArrey* A, int c)
{
    printf("%i - ",A->elements[c]);

}

int Lenght(IntArrey* A)
{
    return A->size;

}

void Print(IntArrey* A)
{
    int i;
    for(i=0;i<A->size;i++)
        {printf("%i;",A->elements[i]);}
    printf("\n");
}
