#include <stdio.h>
#include <stdlib.h>
#include "verem.h"
int main()
{
   int n=5;
   STACK *S;
   S=Create(n);
   Push(S,2);
   Print(S);
   printf("\n");
   Push(S,3);
   Push(S,4);
   Print(S);
   printf("\n");
   Pop(S);
   Print(S);
   printf("\n");
    return 0;
}
