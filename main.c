#include <stdio.h>
#include <stdlib.h>
#include "STACK.h"
int main()
{
    STACK* S=create(5);
    char a='1',b='2',c='3';
    Push(S,a);
    Push(S,b);
    Push(S,c);
    Pop(S);
    printf("%c",Top(S));
    printf("Hello world!\n");
    return 0;
}
