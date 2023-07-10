#include <stdio.h>
#include "PQueue.h"

PQueue* CreatePQ()
{
    PQueue* sor = (PQueue*)calloc(1,sizeof(PQueue));
    if(!sor)
    {
        printf("Sikertelen lefoglals: PQueu\n");
        exit(1);
    }
    return sor;
}

void DestroyPQ(PQueue* pQueue)
{
    DestroyL(pQueue->listafej);
    free(pQueue);
    printf("Sor felszabaditva\n");
}

void Push(PQueue* pQueue, int elem)
{
    pQueue->listafej = InsertOrdered(pQueue->listafej,elem);

}

int Pop(PQueue* pQueue)
{
    if(!isEmpty(pQueue))
    {
        int result = pQueue->listafej->value;
        Item* aux= pQueue->listafej;
        pQueue->listafej = pQueue->listafej->next;
        Destroy(aux);
        return result;
    }
    printf("A sor uress!\n");
    return 0;
}

int Top(PQueue* pQueue)
{
    if(!isEmpty(PQueue))
    {
        return PQueue->listafej->value;
    }
    printf("A sor uress!\n");
    return 0;
}

void PrintPQ(PQueue* pQueue)
{
    Print(PQueue->listafej);
}

bool isEmpty(PQueue* pQueue)
{
    return (pQueue->listafej == NULL);
}
