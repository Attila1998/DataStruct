#include <stdlib.h>
#include <stdio.h>
#include "VarakozasiSor.h"
#include "LancoltLista.h"

VSOR* CreateV()
{
    VSOR* sor;
    sor=(VSOR*)calloc(1,sizeof(VSOR));
    sor->listafej=CreateL();
    sor->listaveg=CreateL();
    return sor;
}


void DestroyV(VSOR* sor)
{
    DestroyL(sor->listafej);
    free(sor->listaveg);
}


void Push(VSOR* sor,int n)
{
    if(isEmpty(sor))
    {
        sor->listafej=insertFirst(sor->listafej,n);
        sor->listaveg=sor->listafej;
    }
    else if(!isFull(sor))
    {
        sor->listafej=insertLast(sor->listafej,n);
        PELEM* x=sor->listafej;
        while(x->next!=NULL)
        {
            x=x->next;
        }
        sor->listaveg=x;
    }

}


int Pop(VSOR* sor)
{
    PELEM* x=sor->listafej;
    if(!isEmpty(sor))
    {
        if(sor->listafej->next==NULL)
        {
            int z=sor->listafej->adat;
            sor->listafej=NULL;
            sor->listaveg=NULL;
            return z;
        }
        while(sor->listafej->next->next!=NULL)
        {
            sor->listafej=sor->listafej->next;
        }
        int z=sor->listaveg->adat;
        sor->listafej->next=NULL;
        sor->listaveg=sor->listafej;
        sor->listafej=x;

        return z;
    }
}


int Top(VSOR* sor)
{
    if(!isEmpty(sor))
    {
        return sor->listaveg->adat;
    }
}


int isEmpty(VSOR* sor)
{
    if(sor->listafej==NULL)
    {
        return 1;
    }
    return 0;
}


int isFull(VSOR* sor)
{
    return 0;
}


void PrintV(VSOR* sor)
{
    Print(sor->listafej);
}




//elsobbsegi sor

ESOR* CreateE()
{
    ESOR* sor;
    sor=(ESOR*)calloc(1,sizeof(ESOR));
    sor->listafej=CreateL();
    return sor;
}


void DestroyE(ESOR* sor)
{
    DestroyE(sor->listafej);
}


int isEmpty1(ESOR* sor)
{
    if(sor->listafej==NULL)
    {
        return 1;
    }
    return 0;
}


int isFull1(ESOR* sor)
{
    return 0;
}


void Push1(ESOR* sor,int n)
{
    if(isEmpty1(sor))
    {
        sor->listafej=insertFirst(sor->listafej,n);
    }
    else if(!isFull1(sor))
    {
        sor->listafej=insertOrdered(sor->listafej,n);
    }
}


int Pop1(ESOR* sor)
{
    if(!isEmpty1(sor))
    {
        if(sor->listafej->next==NULL)
        {
            int data=sor->listafej->adat;
            sor->listafej=NULL;
            return sor->listafej->adat;
        }
        PELEM* copy=sor->listafej;
        while(copy->next->next!=NULL)
        {
            copy=copy->next;
        }
        int adat=copy->next->adat;
        copy->next=NULL;
        return adat;
    }
    else
    {
        return 0;
    }
}


int Top1(ESOR* sor)
{
    if(!isEmpty(sor))
    {
        if(sor->listafej->next==NULL)
        {
            return sor->listafej->adat;
        }
        PELEM* copy=sor->listafej;
        while(copy->next!=NULL)
        {
            copy=copy->next;
        }
        return copy->adat;
    }
}


void Print1(ESOR* sor)
{
    Print(sor->listafej);
}


//Láncolt Lista

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
