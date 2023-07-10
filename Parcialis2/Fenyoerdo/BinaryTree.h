#ifndef BINARYTREE_H_INCLUDED
#define BINARYTREE_H_INCLUDED

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
///legkisebb elem cime, NULL, ha üres a fa
TreeItem* MinValue(TreeItem* tree);
//bejárások

//bal - gyökér - jobb
void Inorder(TreeItem* tree);


#endif // BINARYTREE_H_INCLUDED
