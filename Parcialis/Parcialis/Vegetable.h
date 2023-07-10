#ifndef VEGETABLE_H_INCLUDED
#define VEGETABLE_H_INCLUDED

typedef struct Vegetable{
char* name;
double weight;
char vitamin;
int numberOfDays;
double* Days;
}Vegetable;

Vegetable* Create(int numberOfDays);
void* Destroy(Vegetable* vegetable);
void ReadeFromFile(FILE* file,Vegetable* vegetable);
void PrintToFile(FILE* file,Vegetable* vegetable);
int FillStackFromT(Vegetable* vegetable,int numberOfDays);
void MLDays(Vegetable* vegetable,int numberOfDays);

#endif // VEGETABLE_H_INCLUDED
