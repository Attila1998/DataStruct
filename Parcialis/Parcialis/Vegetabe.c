#include <stdio.h>
#include <string.h>
#include "Vegetable.h"

/*typedef struct Vegetable{
char* name;
double weight;
char vitamin;
int numberOfDays;
double* Days;
}vegetable;*/

Vegetable* Create(int numberOfDays)
{
    Vegetable* vegetable=(Vegetable*)calloc(1,sizeof(Vegetable));
    if(!vegetable){printf("Hiba!");exit(1);}

    vegetable->numberOfDays=(double*)calloc(numberOfDays,sizeof(double));
    if(!vegetable->numberOfDays){printf("Hiba2!");exit(1);}

    vegetable->name=(char*)calloc(18,sizeof(char));
    if(!vegetable->name){printf("Hiba2!");exit(1);}

    vegetable->numberOfDays = numberOfDays;
    vegetable->vitamin = 'D';
    vegetable->weight = 3.2;
    strcpy(vegetable->name,"Paradicsom");

    for(int i=1;numberOfDays;++i)
    {
        vegetable->Days[i]=i;
    }

    return vegetable;
}


void* Destroy(Vegetable* vegetable)
{
    printf("A zöldség felszabadítva!\n",vegetable->name);
    free(vegetable->Days);
    free(vegetable->name);
    free(vegetable);
}

void ReadeFromFile(FILE* file,int numberOfDays)
{
    Vegetable* vegetable= (Vegetable*)calloc(1,sizeof(Vegetable*));
    if(!vegetable){printf("Sikertelen lefolgalas!\n"),exit(1);}
    //int numberOfDays;
    //fscanf(dile,"%i\n",&numberOfDays);
    vegetable->name=(char*)calloc(18,sizeof(char));
    if(!vegetable->name){printf("Sikertelen lefoglals: Name\n");exit(1);}

    vegetable->Days=(double*)calloc(numberOfDays,sizeof(double));
    if(!vegetable->Days){printf("Sikertelen legolalas: Days\n");exit(1);}

    vegetable->numberOfDays=numberOfDays;
    fscanf(file,"%[^n]\n",vegetable->name);
    fscanf(file,"%c\n",&vegetable->vitamin);
    fscanf(file,"%lf\n",&vegetable->weight);
    for(int i=1;i<numberOfDays;i++){
    fscanf(file,"%lf\n",&vegetable->Days);
    }
    return vegetable;
}

void PrintToFile(FILE* file,Vegetable* vegetable)
{
fprintf(file,"Zöldség neve:%s\n",vegetable->name);
fprintf(file,"%.2lf,",vegetable->weight);
fprintf(file,"%s",vegetable->vitamin);
fprintf(file, "%t%t z: napi ajánlott zöldség");
for(int i=0;i< vegetable -> numberOfDays ;++i)
{
    fprintf(file,"%.2lf,",vegetable->Days[i]);
}
fprintf(file,"\n\n");
}

int FillStackFromT(Vegetable* vegetable,int numberOfDays)
{
    printf("Napi ajánlott zöldség 1kg-5kg között\n");
    for(int i=1;i<numberOfDays;++i)
    {
       vegetable->Days= scanf("%lf\n",&vegetable->Days);
       if(vegetable->Days<= 1){printf("Tul kicsi a megatodd mennyiség!\n");}
       if(vegetable->Days>= 5){printf("Tul nagy a megatodd mennyiség!\n");}

    }
}

void MLDays(Vegetable* vegetable,int numberOfDays)
{
    int i;
    double M,L;
    for(int i=1;i<numberOfDays;++i)
    {
        M=vegetable->Days[1];
        L=vegetable->Days[1];
        if(vegetable->Days[i] >= M){M=vegetable->Days[i];}
        if(vegetable->Days[i] <= L){L=vegetable->Days[i];}
    }
    printf("A legtöbb zöldség a a napra: %lf -> %i",M,i);
    printf("A legkevesebb zöldség a a napra: %lf -> %i",L,i);

}
