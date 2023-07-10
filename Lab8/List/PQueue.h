#ifndef PQUEUE_H_INCLUDED
#define PQUEUE_H_INCLUDED

#include <stdio.h>
#include <stdbool.h>
#include "List.h"

typedef struct PQueue {
Item* listafej;
}PQueue;

PQueue* CreatePQ(); //létrehoz egy elsõbbségi sort
void DestroyPQ(PQueue* pQueue); //felszabadít egy elsõbbségi sort
void Push(PQueue* pQueue, int elem); //betesz az elsõbbségi sor megfelelõ pozíciójára
int Pop(PQueue* pQueue); //kiveszi a következõ elemet
int Top(PQueue* pQueue); //megnézi, hogy ki a következõ elem a sorban
void PrintPQ(PQueue* pQueue); //kiírja a teljes elsõbbségi sor tartalmát
bool isEmpty(PQueue* pQueue); //ellenõrzi, hogy üres-e a sor

#endif // PQUEUE_H_INCLUDED
