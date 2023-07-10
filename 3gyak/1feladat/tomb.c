#include <stdlib.h>
#include <stdio.h>
#include "tomb.h"

void Letrehozas (int **px, int n)
{
    *px=(int*)calloc(n,sizeof(int));
    if(!*px)
    {
        printf("Hiba!");
        return 0;
    }
}

void Feltoltes(int *x,int n, int a, int b)
{
    for(int i=0; i<n; i++)
    {
        x[i]=rand()%(b-a+1)+a;
    }
}


void Kiiras   (int *x, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%i ",x[i]);
    }
    printf("\n");
}

int Bub1(int *x,int n)
{
    //int cs=0;
    for(int j=n-1; j>0; j--)
    {
        for(int i=0; i<j; i++)
        {
            if(x[i]>x[i+1])
            {
                x[i]=x[i+1];
                //cs=cs+1;
            }
        }
    }
    // printf("%d ","cserek szama: ",cs,"\n");
    return x;
}

Bub2(int *x,int n)
{
    int ok,cs=0;
    do
    {
        ok=1;
        for(int i=0; i<n-1; i++)
        {
            if(x[i]>x[i+1])
            {
                x[i]=x[i+1];
                ok=0;
                //cs=cs+1;
            }
            n=n-1;
        }
    }
    while(ok=1);
    //printf("%d ","cserek szama: ",cs,"\n");
    return x;
}


Bub3(int *x,int n)
{
    int m,ok,cs=0,k;
    do
    {
        m=n-1,ok=1;
        for(int i=0; i<m; i++)
        {
            if(x[i]>x[i+1])
            {
                x[i]=x[i+1];
                ok=0;
                k=i;
               // cs=cs+1;
            }
        }
    }
    while(ok==1);
    //printf("%d ","cserek szama: ",cs,"\n");
    return x;
}

