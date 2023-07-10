#include "tomb.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
        IntArrey* A;
        A=Create(6);
        Put(A,1,7);
        Put(A,2,8);
        Put(A,3,52);
        Print(A);
       printf("%i",Lenght(A));
        printf("\n");
       printf("%d",Get(A,2));//-not good
    return 0;
}
