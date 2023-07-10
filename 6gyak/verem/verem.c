#include <stdlib.h>
#include <stdio.h>
#include "verem.h"

STACK* Create(int n)
{
    STACK* S=(STACK*)calloc(1,sizeof(STACK));
    S->size=n;
    S->elements=(char*)calloc(n,sizeof(char));
    S->sp=-1;
    return S;
}

void Destroy(STACK* S)
{
    free(S->elements);
    free(S->sp);
    free(S);
}

void Push(STACK* S, char a)
{
    S->elements[S->sp+1]=a;
}

char Top(STACK* S)
{
    printf("%i ", S->elements[S->sp] );
}

void Print(STACK* S)
{
    for(int i=0;i<S->sp;i++)
    {
        printf("%i ",S->elements[i]);
    }
}

int isEmpty(STACK* S)
{
    if((S->sp) ==-1)
    {
        printf("Üress a Verem!");
    }
    Print("\n");
}


int isFull(STACK* S)
{
    if((S->sp)==(S->size-1))
    {
        printf("Tele a Verem!");
    }
    Print("\n");
}

char Pop(STACK* S)
{
    return S->elements[S->sp-1];
}
