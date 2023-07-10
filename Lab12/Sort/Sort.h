#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

char* CreateArray(int n);
void FillWithRandomCharacters(char* Array,int n);
void Print(char* Array,int n);
void Sort(char *Array,int n,int id);
void bubbleSort(char* Array, int n);
void insertionSort(char* Array, int n);
void selectionSort(char* Array, int n);
void shellSort(char* Array, int n);
void mergeSort(char* Array, int l, int r);
void merge(char* Array, int l, int m, int r);
void quickSort(char* Array, int low, int high);
int partition (char* Array, int low, int high)
void heapSort(char* Array, int n);
void heapify(char Array, int n, int i);
void radixsort(char* Array, int n) ;
void countSort(char* Array, int n, int exp) ;
int getMax(char* Array, int n);
void bucketSort(char* Array, int n);
void swap(int *xp, int *yp);

#endif // SORT_H_INCLUDED
