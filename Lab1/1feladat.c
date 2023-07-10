#include "1feladat.h"
#include <stdio.h>


void createArray(int **array,int dimension)
{
    int *st;///seged tomb;
    st=(int*)calloc(dimension,sizeof(int));
    if(!st)
        {
        printf("Hiba!");
        exit(1);
        }///exit(1)=return 0; csak jobb
    *array=st;///array->st
}

void printArray(int* array,int dimension)
{
    for(int i=0;i<dimension;i++)
    {
        printf("%i ,",array[i]);
    }

}

void readArray(const char *fileName, int **array, int *dimension)
{
    int* st,dim;
    FILE* fin=fopen(fileName,"rt");
    if(!fin){printf("Hiba!");exit(1);}
    fscanf(fin,"%i",&dim);
    createArray(&st,dim);
    for(int i=0;i<dim;i++)
    {
        fscanf(fin,"%i",&st[i]);
    }
    *array=st;
    *dimension=dim;
}

void fillArray(int** array, int dimension, int first, int last)
{
    int* st;
    createArray(&st,dimension);
    for(int i=0;i<dimension;i++)
    {
        st[i]=rand()%(last-first+1)+first;
    }
    *array=st;
}

void printArrayToFile(const char* fileName, int *array, int dimension)
{
    FILE* fin=fopen(fileName,"wt");
    if(!fin){printf("Hiba!");exit(1);}
    for(int i=0;i<dimension;i++)
    {
        fprintf(fin,"%i, ",array[i]);
    }
}
