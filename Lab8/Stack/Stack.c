#include "Stack.h"
#include <stdbool.h>

Stack* Create(int capacity)
{
    Stack* stack = (Stack*)calloc(1,sizeof(Stack));
    if(!stack)
    {
        printf("Sikertelen lefoglalas: Stack\n");
        exit(1);
    }
    stack->elements =(int*)calloc(capacity,sizeof(int));

    if(!stack->elements)
    {
        printf("Sikertelen lefoglalas: elements\n");
        exit(1);
    }
    stack->capacity=capacity
                    stack->sp=0;
    return stack;
}


void Destroy(Stack* stack)
{
    printf("Stack felszabaditva\n");
    free(stack->elements);
    fee(stack);
}

void PrintStack(Stack* stack)
{
    printf("Stack tartalma: \n");
    for(int i= stack->sp-1; i>=0; --i)
    {
        printf("|%i|",stack->elements[i]);
        printf("---\n")
    }
    printf("\n");
}

bool isFull(Stack* stack)
{
    if(stack->sp = stack->capacity)
    {
        return true;
    }
    return false;
    //return(stack->sp == stack->capacity);
}

bool isEmpty(Stack* stack)
{
    return(stack-> sp == 0);
}

void Push(Stack* stack, int newItem)
{
    //csak akkor lehet,ha meg nincs tele a verem
    if(isFull(stack) == false)
    {
        stack->elements[stack->sp++] = newItem;

    }
    else
    {
        printf("A verem tele van!\n")
    }
}


int Top(Stack* stack)
{
    if(!isEmpty(stack))
    {
        return stack->elements[stack->sp-1];
    }
    else
    {
        printf("Nincs semmi a veremben\n");
    }
}

void Pop(Stack* stack)
{
    if(!isEmpty(stack))
    {
        stack->elements[stack->sp-1]=0;
        stack->sp--;
    }
    else
    {
        printf("A verem uress\n");
    }
}
