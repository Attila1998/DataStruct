#include "List.h"
#include "BinaryTree.h"
#include <stdio.h>

Item* Create(TreeItem* fa)
{

    Item* item = (Item*)calloc(1,sizeof(Item));
    if(!item)
    {
        printf("Sikertele lefoglalas: Item\n");
    }
    item -> facm = facm;
    item -> next = NULL;
    return item;

}

void Destroy(Item* item)
{

    item -> facm= 0;
    item -> next = Null;
    free(item);
    item = NULL;
    printf("Listaelem felszabadìtva");

}

Item* CreateL()
{
    return NULL;
}

void DestroyL(Item* item)
{

    while(item != NULL)
    {
        Item* aux = item;
        item = item -> next;
        Destroy(aux);
    }
    printf("Lista felszabaditva\n");
}

Item* InsertFirst(Item* item, int facm)
{
    Item* newItem = Create(facm);
    newItem -> next = item;
    return newItem;

}


void Print(Item* item)
{

    printf("A list tartalma:\n");
    while(item != NULL)
    {
    return Inorder(TreeItem* fa);
    }
}

int MagassFaLevel(Item* item){

    while(item != NULL)
    {
    if(item->facm== 348.78)
        {
            TreeItem* ossz=0;
            if(fa->right!=NULL){ossz=ossz+fa->right;}
            if(fa->left!=NULL){ossz=ossz+fa->left;}
        }
    }
return ossz;
}

int LegkisebbLevel(Item* item)
{
    while(itme!=NULL)
    {
        return MinValue(fa);
    }
}
