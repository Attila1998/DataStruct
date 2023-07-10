#include <stdlib.h>
#include <stdio.h>
#include "LancoltLista.h"

PELEM*Create(int n)
{
    PELEM*a=(PELEM*)calloc(1,sizeof(PELEM));
    a->adat=n;
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
    if(n<=a->adat)
    {
        return insertFirst(a,n);
    }
    save=a;
    while(a->next->adat < n)
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
        printf("%d ", a->adat);
        while(a->next!=NULL)
        {
            a=a->next;
            printf("%d ",a->adat);
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

PELEM* SortL(PELEM*a)
{
    if(a!=NULL)
    {
        if(a->next==NULL)
        {
            return a;
        }
        else{
            int oke=1;
            while(oke)
            {
                oke=0;
                for(PELEM* i=a; i->next!=NULL; i=i->next)
                {
                    if(i->adat > i->next->adat)
                    {
                        oke=1;
                        int seged;
                        seged=i->adat;
                        i->adat=i->next->adat;
                        i->next->adat-seged;
                    }
                }
            }
            return a;
        }
    }
    return NULL;
}
