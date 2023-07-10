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
///F�ra vonatkozo fuggvenyek
///return NULL
TreeItem* CreateTree();
///egy elem besz�r�sa a f�ba - BST
TreeItem* Insert(TreeItem* tree, int value);
///egy elem t�rl�se a f�b�l
TreeItem* Delete(TreeItem* tree, int value);
///legkisebb elem cime, NULL, ha �res a fa
TreeItem* MinValue(TreeItem* tree);
//bej�r�sok

//bal - gy�k�r - jobb
void Inorder(TreeItem* tree);


#endif // BINARYTREE_H_INCLUDED
