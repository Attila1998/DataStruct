#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include "BinaryTree.h"
typedef struct Item {
TreeItem* fa;
double facm;
struct Item* next;
}Item;
Item* Create(TreeItem* fa);
void Destroy(Item* item);
Item* CreateL();
void DestroyL(Item* item);
Item* InsertFirst(Item* item, TreeItem* fa);
void Print(Item* item);
int MagassFaLevel(Item* item);
int LegkisebbLevel(Item* item);
#endif // LIST_H_INCLUDED
