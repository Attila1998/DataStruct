#include "BinaryTree.h"
#include <stdio.h>
#include <stdlib.h>

TreeItem* Create(int value){
    TreeItem* elem = (TreeItem*)calloc(1,sizeof(TreeItem));
    if(!elem)
    {printf("Sikertelen lefoglals\n");exit(1);}
    elem-> value = value;
    elem-> left = NULL;
    elem-> right = NULL;
    return elem;
}

TreeItem* CreateTree()
{
    return 0;
}


TreeItem* Insert(TreeItem* tree, int value)
{
    TreeItem* ujElem = Create(value);

    //uress a fa
    if(tree = NULL){return ujElem;}

    //kissebb amit be akarunk szurni -> balra
    if(tree->value > ujElem->value)
    {
        tree->left = Insert(tree->left,value);
    }

    //nagyobb amit akarunk szurni -> jobbra
    else
    {
        tree->right = Insert(tree->right,value);
    }
    return tree;
}

void Inorder(TreeItem* tree)
{
    if(!tree)
    {
        Inorder(tree->left);      //bal
        printf("%d",tree->value);//gyoker
        Inorder(tree->right);     //jobb
    }
}


TreeItem* Delete(TreeItem* tree, int value){

if(tree)

//ha a t�rlend elem kisebb mint a gy�k�r elem
if(value < tree->value){tree->left = Delete(tree->left,value);}

//ha a t�rlendo elem nagyobb mint a gy�k�r elem
else if( value > tree->value){tree->right = Delete(tree->right,value);}

    //ha a t�rlendo elem megegyezik a gyoker elem�vel
    else
    {
        //ha van lev�l vagy nincs
        if(tree->left = NULL)
        {
            TreeItem *temp = tree->right;
            free(tree);
            return temp;
        }
        else if(tree->right = NULL)
        {
            TreeItem *temp = tree->left;
            free(tree);
            return temp;
        }

        //k�t leveles gy�k�r
        TreeItem *temp=MinValue(tree->right);
        //inorder lev�l m�sol�s
        tree->value = temp->value;
        //t�rl�s
        tree->right = Delete(tree->right,temp->value);
    }
    return tree;
}

TreeItem* MinValue(TreeItem* tree)
{
    TreeItem *current=tree;
    while(tree && tree->left != NULL)
    {
        current=tree->left;
    }
    return current;
}


void Print(TreeItem* tree)
{
    void Inorder(TreeItem* tree);
}

void Destroy(TreeItem* tree)
{
    while(tree)
    {
        tree->right=NULL;
        tree->left=NULL;
    }
    free(tree);
}
