#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include "StudList.h"
typedef struct Item {
Student* elements;
struct Item* next;
}Item;

Item* Create(Student* elements);
void Destroy(Item* item);
Item* CreateL();
void DestroyL(Item* item);
void Print(Item* item);
void SpecificFirstLetter(Item* item,char letter);
void PrintListToFile(Item* item,char* fileName);
Item* ReadElements(char* fileName, Item* item);
Item* InsertLast(Item* item, Student* student);
double AvarageOfAge(Item* item,char classRoom,int grade);
double AvarageOfClass(Item* item);

#endif // LIST_H_INCLUDED
