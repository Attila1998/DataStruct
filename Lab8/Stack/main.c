#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
#include <stdbool.h>

int main()
{
    Stack* stack=Create(6);
    printStack(stack);

    Destroy(stack);
    return 0;
}
