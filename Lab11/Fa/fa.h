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
///F�ra vonatkozo fuggvenyek
///return NULL
TreeItem* CreateTree();
///egy elem besz�r�sa a f�ba - BST
TreeItem* Insert(TreeItem* tree, int value);
///egy elem t�rl�se a f�b�l
TreeItem* Delete(TreeItem* tree, int value);
///az els� el�fordul�s�t keresi egy �rt�knek, NULL, ha nincs benne, cim, ha benne van
TreeItem* Search(TreeItem* tree, int value);
///legkisebb elem cime, NULL, ha �res a fa
TreeItem* MinValue(TreeItem* tree);
///legnagyobb elem cime, NULL, ha �res a fa
TreeItem* MaxValue(TreeItem* tree);
//bej�r�sok
//bal - gy�k�r - jobb
void Inorder(TreeItem* tree);
//gy�k�r - bal - jobb
void Preorder(TreeItem* tree);
//bal - jobb - gy�k�r
void Postorder(TreeItem* tree);

#endif // FA_H_INCLUDED
