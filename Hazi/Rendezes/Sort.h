#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

int * Create1D(int);

int * Create1DRand(int,int,int);

void print1D(int *, int);

int * CopyArray(int*,int);

int * bubblesort(int *,int);
int * selectionsort(int *,int );
int * insertionsort(int*,int);
int * shellsort(int*,int,int*,int);
int * countingsort(int*,int);
void mergesort(int*,int,int);
void Merge(int*,int,int,int);
void quicksort(int*,int,int);
int Partition(int*,int,int);
int * heapsort(int*,int);
void kupacol(int*,int,int);

#endif // RENDEZES_H_INCLUDED
