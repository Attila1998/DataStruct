#include <stdio.h>
#include <stdlib.h>
#include "Sort.h"
#include <time.h>


int main()
{
    clock_t start,stop;
    int*A,n=10,*a,*seged;
    A=Create1DRand(n,10,100);
    print1D(A,n);
    a=masolt(A,n);
    seged=masolt(A,n);
    seged=bubblesort(seged,n);
    start=clock();
    a=bubblesort(a,n);
    stop=clock();
    printf("\nBubblesort %f",(double)(stop-start)/CLOCKS_PER_SEC);
    printf("\n");

    a=masolt(A,n);
    start=clock();
    a=selectionsort(a,n);
    stop=clock();
    printf("\nSelectionsort %f",(double)(stop-start)/CLOCKS_PER_SEC);
    printf("\n");

    a=masolt(A,n);
    start=clock();
    a=insertionsort(a,n);
    stop=clock();
    printf("\nInsertionsort %f",(double)(stop-start)/CLOCKS_PER_SEC);
    printf("\n");

    a=masolt(A,n);
    int hn=10,*h=Create1D(hn),i;
    for(i=hn; i>0; --i)
    {
        h[i]=i;
    }
    start=clock();
    a=shellsort(a,n,h,hn);
    stop=clock();
    printf("\nShellsort %f",(double)(stop-start)/CLOCKS_PER_SEC);
    printf("\n");

    a=masolt(A,n);
    start=clock();
    a=countingsort(a,n);
    stop=clock();
    printf("\nCountingsort %f",(double)(stop-start)/CLOCKS_PER_SEC);
    printf("\n");

    start=clock();
    mergesort(a,0,n-1);
    stop=clock();
    printf("\nMergesort %f",(double)(stop-start)/CLOCKS_PER_SEC);
    printf("\n");

    a=masolt(A,n);
    start=clock();
    quicksort(a,0,n-1);
    stop=clock();
    printf("\nQuicksort %f",(double)(stop-start)/CLOCKS_PER_SEC);
    printf("\n");

    a=masolt(A,n);
    start=clock();
    a=heapsort(a,n);
    stop=clock();
    printf("\nHeapsort %f",(double)(stop-start)/CLOCKS_PER_SEC);
    printf("\n");

    /*int*t;
    int n=10;
    t=Create1DRand(n);
    print1D(t,n);

    printf("\nBubblesort:");
    bubblesort(t,n);
    print1D(t,n);

    printf("\nSelection:");
    selectionsort(t,n);
    print1D(t,n);

    printf("\nCounting:");
    countingsort(t,n);
    print1D(t,n);

    printf("\nInsertion:");
    insertionsort(t,n);
    print1D(t,n);*/
    return 0;
}
