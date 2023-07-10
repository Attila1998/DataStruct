#include <stdio.h>
#include "tomb4.h"

void Create(int dim,int **arr)
{
    *arr=(int*)calloc(dim,sizeof(int));
    if(!*arr)
    {
        printf("Hiba!");
        exit(1);
    }
}

void PrintArray(int *arr,int dim)
{
    for(int i=0;i<dim;i++)
    {
        printf("%i ",arr[i]);
    }
}

void In(int *arr,int dim)
{
    printf("Give me the Array Dimension: \n");
    scanf("%i",&dim);
    printf("Give me the elements: \n");
    for(int i=0;i<dim;i++)
    {
        scanf("i%",&arr[i]);
    }
}
void TxtIn(const char *fileName,int *arr,int dim)
{
    FILE* fin=fopen(fileName,"rt");
    if(!fin)
    {
        printf("Hiba!");
        exit(1);
    }
    fscanf("%i",&dim);
    for(int i=0;i<dim;i++)
    {
        fscanf("%i",&arr[i]);
    }
}

int Multi(int *arr,int dim)
{
    int M1=1;
    for(int i=0;i<dim;i++)
    {
        M1=M1*arr[i];
    }
    return M1;
}

int Sub(int *arr,int dim)
{
    int S1=0;
    for(int i=0;i<dim;i++)
    {
        S1=S1-arr[i];
    }
    return S1;
}

int Sum(int *arr,int dim)
{
    int S2=0;
    for(int i=0;i<dim;i++)
    {
        S2=S2+arr[i];
    }
    return S2;

}

int Poz(int *arr,int dim)
{
    int Pozz=0;
    for(int i=0;i<dim;i++)
    {
        if(arr[i]>0)
        {
            Pozz++;
        }
    }
    return Pozz;
}

int Neg(int *arr,int dim)
{
    int Negg=0;
    for(int i=0;i<dim;i++)
    {
        if(arr[i]<0)
        {
            Negg++;
        }
    }
    return Negg;
}
