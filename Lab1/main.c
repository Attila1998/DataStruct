#include <stdio.h>
#include <stdlib.h>
#include "1feladat.h"

int main()
{
    int* tomb,n=7;
    //createArray(&tomb,n);
    //readArray("be.txt",&tomb,&n);
    fillArray(&tomb,n,1,20);
    printArray(tomb,n);
    printArrayToFile("kimenet.txt",&tomb,n);
    return 0;
}
