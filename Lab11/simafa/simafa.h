#ifndef SIMAFA_H_INCLUDED
#define SIMAFA_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>


struct node
{
    int key;
    struct node *left, *right;
};

struct node *newNode(int item);
void inorder(struct node *root);
struct node* insert(struct node* node, int key);
struct node * minValueNode(struct node* node);
struct node* deleteNode(struct node* root, int key);

#endif // SIMAFA_H_INCLUDED
