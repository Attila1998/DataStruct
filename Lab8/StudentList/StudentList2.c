#include <stdlib.h>
#include <stdio.h>
#include "StudentList.h"
#include "StudentList2.h"


#include <stdlib.h>
#include <stdio.h>
#include "LancoltLista.h"

PELEM*Create(int n)
{
    PELEM*a=(PELEM*)calloc(1,sizeof(PELEM));
    a->student=n;
    a->next=NULL;
    return a;
}

void Destroy(PELEM*a)
{
    free(a);
}

PELEM*CreateL()
{
    return NULL;
}

void DestroyL(PELEM*a)
{
    if(a!=NULL)
    {
        free(a->next);
        free(a);
    }
}

PELEM* insertLast(PELEM*a, int n)
{
    PELEM*x=a;
    if(a==NULL)
    {
        return Create(n);
    }
    while(a->next!=NULL)
    {
        a=a->next;
    }
    a->next=Create(n);
    return x;
}

PELEM* insertFirst(PELEM*a, int n)
{
    PELEM*x;
    if(a==NULL)
    {
        Create(n);
    }
    x=Create(n);
    x->next=a;
    return x;
}

PELEM* insertOrdered(PELEM*a, int n)
{
    PELEM*x,*save;
    if(a==NULL)
    {
        return Create(n);
    }
    if(n<=a->student)
    {
        return insertFirst(a,n);
    }
    save=a;
    while(a->next->student< n)
    {
        a=a->next;
        if(a->next==NULL)
        {
            break;
        }
    }
    x=Create(n);
    x->next=a->next;
    a->next=x;
    return save;
}

void Print(PELEM*a)
{
    if(a!=NULL)
    {
        printf("%d ", a->student);
        while(a->next!=NULL)
        {
            a=a->next;
            printf("%d ",a->student);
        }
        printf("\n");
    }
    else
    {
        printf("NULL\n");
    }
}

PELEM* Delete(PELEM*a, int n)
{
    PELEM *save,*delet;
    if(n==0)
    {
        save=a->next;
        Destroy(a);
        return save;
    }
    save=a;
    int i=0;
    while(i<n-1)
    {
        a=a->next;
        ++i;
        if(a->next==NULL)
        {
            return save;
        }
    }
    delet=a->next;
    a->next=delet->next;
    Destroy(delet);
    return save;
}

