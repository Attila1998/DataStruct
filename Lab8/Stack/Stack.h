#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <stdbool.h>

typedef struct Stack
{
    int capacity; //kapacit�s, maximum h�ny elem f�r el a veremben
    int* elements; //a veremben lev� elemek t�mbje
    int sp; //verem teteje, h�ny elem van jelenleg a veremben
} Stack;
//verem l�trehoz�sa
Stack* Create(int capacity);
//verem felszabadit�sa
void Destroy(Stack* stack);
//elem besz�r�sa a verembe
void Push(Stack* stack, int newItem);
//elem kiv�tele a veremb�l (mindig a legfels� elemet kell kivenn�nk)
void Pop(Stack* stack);
//verem tetej�n lev� elem visszat�rit�se
int Top(Stack* stack);
//irjuk ki a verem tartalm�t
void PrintStack(Stack* stack);
//tele van-e a verem
bool isFull(Stack* stack);
//�res-e a verem
bool isEmpty(Stack* stack);

#endif // STACK_H_INCLUDED
