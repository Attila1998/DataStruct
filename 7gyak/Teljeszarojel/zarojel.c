#include <stdlib.h>
#include <stdio.h>
#include "zarojel.h"

STACK* create(int n)
{
    STACK*S=(STACK*)calloc(1,sizeof(STACK));
    S->size=n;
    (*S).elements=(char *)calloc(n,sizeof(char));
    (*S).sp=-1;
    return S;
}

void Push(STACK* S, char a )
{
    (*S).sp++;
    (*S).elements[S->sp]=a;
}

char Pop(STACK* S)
{
    char x;
    x=(*S).elements[S->sp];
    free((*S).elements[S->sp]);
    S->sp-=1;
    return x;
}

void Print(STACK* S)
{
    int i;
    for(i=S->sp; i>=0; i--)
    {
        printf("%c\n",S->elements[i]);
    }
}

void CreateFILE(const char* IN, char** pT, int* pN)
{
    FILE* fin;
    fin=fopen(IN,"rt");
    int* T;
    int n;
    fscanf(fin,"%i",&n);
    T=(int*)calloc(n,sizeof(int));
    int i;
    for(i=0;i<n;++i){
        fscanf(fin,"%s",&T[i]);
    }
    *pT=T;
    *pN=n;
}

void PrintFile(char* S, int n)
{
    int i;
        for(i=0;i<S->size;i++)
        {printf("%c\n",S->elements[i]);}
}
