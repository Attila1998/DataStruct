#include <stdbool.h>
#include "Vegetable.h"

typedef struct VegetableStack
{
    int capacity; //kapacit�s, maximum h�ny elem f�r el a veremben
    Vegetable* elements; //a veremben lev� elemek t�mbje
    Vegetable sp; //verem teteje, h�ny elem van jelenleg a veremben
} VegetableStack;
//verem l�trehoz�sa
VegetableStack* Create(int capacity);
//verem felszabadit�sa
void Destroy(VegetableStack* Vegetable);
//elem besz�r�sa a verembe
void Push(VegetableStack* vegetable, Vegetabele newItem);
//elem kiv�tele a veremb�l (mindig a legfels� elemet kell kivenn�nk)
void Pop(VegetableStack* Vegetable);
//verem tetej�n lev� elem visszat�rit�se
int Top(Vegetable* stack);
//irjuk ki a verem tartalm�t
void PrintStack(VegetableStack* Vegetable);
//tele van-e a verem
bool isFull(VegetableStack* Vegetable);
//�res-e a verem
bool isEmpty(VegetableStack* Vegetable);
