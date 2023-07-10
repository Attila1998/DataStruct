#include <stdbool.h>
#include "Vegetable.h"

typedef struct VegetableStack
{
    int capacity; //kapacitás, maximum hány elem fér el a veremben
    Vegetable* elements; //a veremben levõ elemek tömbje
    Vegetable sp; //verem teteje, hány elem van jelenleg a veremben
} VegetableStack;
//verem létrehozása
VegetableStack* Create(int capacity);
//verem felszabaditása
void Destroy(VegetableStack* Vegetable);
//elem beszúrása a verembe
void Push(VegetableStack* vegetable, Vegetabele newItem);
//elem kivétele a verembõl (mindig a legfelsõ elemet kell kivennünk)
void Pop(VegetableStack* Vegetable);
//verem tetején levõ elem visszatéritése
int Top(Vegetable* stack);
//irjuk ki a verem tartalmát
void PrintStack(VegetableStack* Vegetable);
//tele van-e a verem
bool isFull(VegetableStack* Vegetable);
//üres-e a verem
bool isEmpty(VegetableStack* Vegetable);
