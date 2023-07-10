#ifndef FA_H_INCLUDED
#define FA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
typedef struct TreeItem {
int value;
struct TreeItem* left, * right;
}TreeItem;

///Egy csucsra vonatkozo fuggvenyek
TreeItem* Create(int value);
void Destroy(TreeItem* tree);
void Print(TreeItem* tree);
///Fára vonatkozo fuggvenyek
///return NULL
TreeItem* CreateTree();
///egy elem beszúrása a fába - BST
TreeItem* Insert(TreeItem* tree, int value);
///egy elem törlése a fából
TreeItem* Delete(TreeItem* tree, int value);
///az elsõ elõfordulását keresi egy értéknek, NULL, ha nincs benne, cim, ha benne van
TreeItem* Search(TreeItem* tree, int value);
///legkisebb elem cime, NULL, ha üres a fa
TreeItem* MinValue(TreeItem* tree);
///legnagyobb elem cime, NULL, ha üres a fa
TreeItem* MaxValue(TreeItem* tree);
//bejárások
//bal - gyökér - jobb
void Inorder(TreeItem* tree);
//gyökér - bal - jobb
void Preorder(TreeItem* tree);
//bal - jobb - gyökér
void Postorder(TreeItem* tree);

#endif // FA_H_INCLUDED
