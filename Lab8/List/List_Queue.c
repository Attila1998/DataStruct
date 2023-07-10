#include "List_Queue.h"
#include <stdio.h>

Item* Create(int value)
{

    Item* item = (Item*)calloc(1,sizeof(Item));
    if(!item)
    {
        printf("Sikertele lefoglalas: Item\n");
    }
    item -> value = value;
    item -> next = NULL;
    return item;

}

void Destroy(Item* item)
{

    item -> value = 0;
    item -> next = Null;
    free(item);
    item = NULL;
    printf("Listaelem felszabadìtva");

}

Item* CreateL()
{
    return NULL
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

Item* InsertFirst(Item* item, int value)
{
    Item* newItem = Create(value);
    newItem -> next = item;
    return newItem;

}

Item* InsertLast(Item* item, int value)
{
    Item* head = item;
    Item* newItem = Create(value);
    if(item == NULL)
    {
        return newItem;
    }
    while(item -> next != NULL)
    {
        item = item -> next;
    }
    item -> next = newItem
    return head;
}

Item* InsertOrdered(Item* item, int value)
{
    //novekvo sorrend
    Item* head = item;
    Item* ite = Create(value);
    //uress lista
    if(item == NULL)
    {
        return newItem;
    }
    if(item->value > newItem->value)
    {
        //item = InsertFirst(item, newItem->value)
        newItem->next = item;
        return newItem;
    }
    while((item->next != NULL) && (item->next->value < newItem->value)
{
    item = item->next;
}
    if(item->next == NULL)
{
    item->next = newItem;
}
    else
{
    newItem->next = item->next;
    item->next = newItem;
}
    return head;

}

void Print(Item* item)
{

    printf("A list tartalma:\n");
    while(item != NULL)
    {
        printf("%i ", item->value);
        item=item->next;
    }
    printf("\n");
}

Item* SortL(Item* item)
{
    Item* sorted = CreateL();
    while(item != NULL)
    {
        sorted = InsertOrdered(sorted, item->value);
        item = item->next;
    }
    return sorted;
}

Item* Delete(Item* item, int value)
{
    Item* head = item;
    while(item->next != NULL && item->next->value != value)
    {
        item =item->next;
    }
    if(item->next != NULL)
    {
        Item* aux =item->next;
        item->next = item->next->next;
        Destroy(aux);
        printf("Lista elem torolve;\n")
    }
    return head;
}
