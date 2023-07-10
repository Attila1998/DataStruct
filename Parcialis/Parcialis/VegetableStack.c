#ifndef VEGETABLESTACK_H_INCLUDED
#define VEGETABLESTACK_H_INCLUDED

#include "VegetableStack.h"
#include "Vegetable.h"
#include <stdbool.h>

VegetableStack* Create(int capacity)
{
    VegetableStack* vs = (VegetableStack*)calloc(1,sizeof(VegetableStack));
    if(!vs)
    {
        printf("Sikertelen lefoglalas: Stack\n");
        exit(1);
    }
    vs->elements =(Vegetable*)calloc(capacity,sizeof(Vegetable));

    if(!vs->elements)
    {
        printf("Sikertelen lefoglalas: elements\n");
        exit(1);
    }
    vs->capacity=capacity
                    vs->sp=0;
    return vs;
}


void Destroy(Stack* vs)
{
    printf("Stack felszabaditva\n");
    free(vs->elements);
    fee(vs);
}

void PrintStack(Stack* vs)
{
    printf("Stack tartalma: \n");
    for(int i= vs->sp-1; i>=0; --i)
    {
        printf("|%i|",vs->elements[i]);
        printf("---\n")
    }
    printf("\n");
}

bool isFull(Stack* vs)
{
    if(vs->sp = vs->capacity)
    {
        return true;
    }
    return false;
    //return(stack->sp == stack->capacity);
}

bool isEmpty(Stack* vs)
{
    return(vs-> sp == 0);
}

void Push(Stack* vs, int newItem)
{
    //csak akkor lehet,ha meg nincs tele a verem
    if(isFull(vs) == false)
    {
        vs->elements[vs->sp++] = newItem;

    }
    else
    {
        printf("A verem tele van!\n")
    }
}


int Top(Stack* vs)
{
    if(!isEmpty(vs))
    {
        return vs->elements[vs->sp-1];
    }
    else
    {
        printf("Nincs semmi a veremben\n");
    }
}

void Pop(Stack* vs)
{
    if(!isEmpty(vs))
    {
        vs->elements[vs->sp-1]=0;
        vs->sp--;
    }
    else
    {
        printf("A verem uress\n");
    }
}

VegetableStack* ReadElements(char* fileName, VegetableStack* vs)
{
    FILE* file = fopen(fileName,"rt");
    if(!file){printf("Sikertelen fajlmegnyitas!\n");return 1;}
    int capaciti;
    while(fscanf(file,"%s\n",&capaciti)!=EOF)//fajl vege
    {
      Vegetable* vegetable = Create(file,capaciti);
    }
    return vs;
}

void PrintListToFile(VegetableStack* vs ,char* fileName)
{
    FILE* fout = fopen(fileName,"wt");
    if(!fout){printf("Sikertelen fajlmegnyitas!\n");return 1;}
    fprintf(fout,"\n")
    printf("A list tartalma:\n");
    while(vs != sp)
    {
        PrintToFile(fout,vs->elements);
        sp++;
    }
    printf("\n");
}
#endif // VEGETABLESTACK_H_INCLUDED
