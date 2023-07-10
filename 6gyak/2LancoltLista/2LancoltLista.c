#include <stdio.h>
#include <stdlib.h>
#include "2LancoltLista.h"

PELEM2* Create(int n)
{
    PELEM2*a=(PELEM2*)calloc(1,sizeof(PELEM2));
    a->data=n;
    a->next=NULL;
    a->prev=NULL;
    return a;
}

void Destroy(PELEM2*a)
{
    free(a);
}

PELEM2* CreateL()
{
    return NULL;
}

void DestroyL(PELEM2*a)
{
    if(a!=NULL)
    {
        DestroyL(a->next);
        Destroy(a);
    }
}

PELEM2* insertLast(PELEM2*a, int n)
{
    PELEM2*x=a;
    if(a==NULL)
    {
        return Create(n);
    }
    while(a->next!=NULL)
    {
        a=a->next;
    }
    a->next=Create(n);
    a->next->prev=a;
    return x;
}

PELEM2* insertFirst(PELEM2*a, int n)
{
    PELEM2*x;
    if(a==NULL)
    {
        return Create(n);
    }
    x=Create(n);
    x->next=a;
    x->next->prev=x;
    return x;
}

PELEM2* insertOrdered(PELEM2*a, int n)
{
    if(a==NULL)
    {
        return Create(n);
    }
    if(n<=a->data)
    {
        return insertFirst(a,n);
    }
    PELEM2*x,*ment;
    save=a;
    while(a->next->data < n)
    {
        a=a->next;
        if(a->next==NULL)
        {
            break;
        }
    }
    x=Create(n);
    a->next->prev=x;
    x->prev=a;
    x->next=a->next;
    a->next=x;
    return save;
}

void Print(PELEM2*a)
{
    if(a!=NULL)
    {
        printf("%i ",a->data);
        while(a->next!=NULL)
        {
            a=a->next;
            printf("%i ", a->data);
        }
        printf("\n");
    }
    else
    {
        printf("NULL!!\n");
    }
}

PELEM2* SortL(PELEM2*);

PELEM2* Delete(PELEM2*a, int n)
{
    PELEM2*save;
    if(n==0)
    {
        save=a->next;
        save->prev=NULL;
        Destroy(a);
        return save;
    }
    save=a;
    int i=0;
    while(i<n)
    {
        a=a->next;
        ++i;
        if(a->next==NULL && i!=n)
        {
            return save;
        }
    }
    if(a->next==NULL)
    {
        a->prev->next=NULL;
    }
    else
    {
        a->prev->next=a->next;
        a->prev->next->prev=a->prev;
    }
    Destroy(a);
    return ment;
}
