#ifndef PQUEUE_H_INCLUDED
#define PQUEUE_H_INCLUDED

#include <stdio.h>
#include <stdbool.h>
#include "List.h"

typedef struct PQueue {
Item* listafej;
}PQueue;

PQueue* CreatePQ(); //l�trehoz egy els�bbs�gi sort
void DestroyPQ(PQueue* pQueue); //felszabad�t egy els�bbs�gi sort
void Push(PQueue* pQueue, int elem); //betesz az els�bbs�gi sor megfelel� poz�ci�j�ra
int Pop(PQueue* pQueue); //kiveszi a k�vetkez� elemet
int Top(PQueue* pQueue); //megn�zi, hogy ki a k�vetkez� elem a sorban
void PrintPQ(PQueue* pQueue); //ki�rja a teljes els�bbs�gi sor tartalm�t
bool isEmpty(PQueue* pQueue); //ellen�rzi, hogy �res-e a sor

#endif // PQUEUE_H_INCLUDED
