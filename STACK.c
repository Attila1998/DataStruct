#include <stdio.h>
#include <stdlib.h>
#include "STACK.h"

/*typedef struct STACK
{

    int size;

    char *elements;

    int sp; //stack pointer - veremmutató

} STACK;*/

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
char Top(STACK* S)
{
    return S->elements[S->sp];
}

int isEmpty(STACK* S)
{
    if(S->sp==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(STACK* S)
{
    if(S->sp==sizeof((*S).elements))
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
void Destroy(STACK* S)
{
    free(S->elements);
    free(S);

}

void Print(STACK* S)
{
    int i;
    for(i=S->sp; i>=0; i--)
    {
        printf("%c\n",S->elements[i]);
    }
}
