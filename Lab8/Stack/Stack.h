#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <stdbool.h>

typedef struct Stack
{
    int capacity; //kapacitás, maximum hány elem fér el a veremben
    int* elements; //a veremben levõ elemek tömbje
    int sp; //verem teteje, hány elem van jelenleg a veremben
} Stack;
//verem létrehozása
Stack* Create(int capacity);
//verem felszabaditása
void Destroy(Stack* stack);
//elem beszúrása a verembe
void Push(Stack* stack, int newItem);
//elem kivétele a verembõl (mindig a legfelsõ elemet kell kivennünk)
void Pop(Stack* stack);
//verem tetején levõ elem visszatéritése
int Top(Stack* stack);
//irjuk ki a verem tartalmát
void PrintStack(Stack* stack);
//tele van-e a verem
bool isFull(Stack* stack);
//üres-e a verem
bool isEmpty(Stack* stack);

#endif // STACK_H_INCLUDED
