#ifndef LIST_QUEUE_H_INCLUDED
#define LIST_QUEUE_H_INCLUDED

typedef struct Item {
int value;
struct Item* next;
}Item;
Item* Create(int value);
void Destroy(Item* item);
Item* CreateL();
void DestroyL(Item* item);
Item* InsertFirst(Item* item, int value);
Item* InsertLast(Item* item, int value);
Item* InsertOrdered(Item* item, int value);
void Print(Item* item);
Item* SortL(Item* item);
Item* Delete(Item* item, int value);

#endif // LIST_QUEUE_H_INCLUDED
