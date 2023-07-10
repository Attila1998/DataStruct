#ifndef TOMB4_H_INCLUDED
#define TOMB4_H_INCLUDED


void Create(int dim,int **arr);
void In(int *arr,int dim);
void TxtIn(const char *fileName,int **arr, int dim);
void PrintArray(int *arr,int dim);
int Multi(int *arr,int dim);
int Sub(int *arr,int dim);
int Sum(int *arr,int dim);
int PSum(int *arr,int dim);
int PozNeg(int *arr,int dim);
int Poz(int *arr,int dim);
int Neg(int *arr,int dim);


#endif // TOMB4_H_INCLUDED
