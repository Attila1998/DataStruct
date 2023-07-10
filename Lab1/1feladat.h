#ifndef FELADAT_H_INCLUDED
#define FELADAT_H_INCLUDED
#include <stdio.h>
#include <time.h>

///tomb letrehozasa
///calloc vagy malloc
void createArray(int **array,int dimension);

///allomany -> tomb
void readArrady(const char *fileName,int **array, int *dimension);

///tömb tartalmának kiiratása a képernyőre
void printArray(int* array,int dimension);

///tömb tartalmának beolvasása állományból
void readArray(const char *fileName, int **array, int *dimension);

///tömb tartalmának véletlenszámokkal való feltöltése
void fillArray(int** array, int dimension, int first, int last);

///tömb tartalmának kiiratása állományba
void printArrayToFile(const char* fileName, int *array, int dimension);
#endif // 1FELADAT_H_INCLUDED
