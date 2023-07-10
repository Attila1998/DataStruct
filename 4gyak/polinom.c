#include <stdlib.h>
#include <stdio.h>
#include "polinom.h"

Polinom* Create(int n)
{
    Polinom * a = (Polinom*)calloc(1,sizeof(Polinom));
    a->fok=0;
    a->size=n+1;
    a->egyutthatok = (int*)calloc(a->size,sizeof(int));
    return a;
}

void Destroy(Polinom*a)
{
    free(a->egyutthatok);
    free(a->fok);
    free(a->size);
    free(a);
}

int PutEgyutthato(Polinom*a, int fokszam, int elem)
{
    a->egyutthatok[fokszam]=elem;
    return a;
}

int GetEgyutthato(Polinom*a, int fokszam)
{
    return a->egyutthatok[fokszam];
}

int NullPolinom(Polinom*a)
{
    if(a->size==0)
    {
        return 1;
    }
    return 0;
}

void Print(Polinom*a)
{
    for(int i=a->size; i>=0; --i)
    {
        printf("%ix^%i + ", a->egyutthatok[i],i);
    }
    printf("\n");
}

Polinom* Osszead(Polinom*a, Polinom*b)
{
    Polinom*osszeg;
    if(a->size < b->size)
    {
        osszeg=Create(b->size);
    }
    else
    {
        osszeg=Create(a->size);
    }
    for(int i=0; i<=osszeg->size; ++i)
    {
        PutEgyutthato(osszeg,i,GetEgyutthato(a,i)+GetEgyutthato(b,i));
    }
    return osszeg;
}

Polinom* Szoroz(Polinom*a, Polinom*b)
{
    Polinom * szorzat;
    szorzat=Create(a->size + b->size - 1);
    for(int i=0; i<a->size; ++i)
    {
        for(int j=0; j<b->size; ++j)
        {
            PutEgyutthato(szorzat,i+j,GetEgyutthato(szorzat,i+j)+GetEgyutthato(a,i)*GetEgyutthato(b,j));
        }
    }
    return szorzat;
}



int PolinomErteke(Polinom*a, int n)
{
    int megoldas=0,x=1;
    for(int i=0; i<a->size; ++i)
    {
        megoldas=megoldas+GetEgyutthato(a,i)*x;
        x=x*n;
    }
    return megoldas;
}
