#include <stdlib.h>
#include <stdio.h>
#include "Sort.h"
#include <time.h>

int * Create1D(int N)
{
    int*x;
    x=(int*)calloc(N,sizeof(int));
    return x;
}

int* Create1DRand(int N, int a, int b){
    int *t;
    t = Create1D(N);
    srand(time(NULL));
    int i=0;
    for(i=0;i<N;++i)
    {
        t[i]=rand()%(b-a+1)+a;
    }
    return t;
}


void print1D(int*t, int n)
{
    for(int i=0; i<n; ++i)
    {
        printf("%d ",t[i]);
    }
}


int * CopyArray(int*t, int N)
{
    int*m;
    m=Create1D(N);
    for(int i=0; i<N; ++i)
    {
        m[i]=t[i];
    }
    return m;
}

int * bubblesort(int*t, int n)
{
    int ind;
    do
    {
        ind=0;
        for(int i=0; i<n; ++i)
        {
            if(t[i]>t[i+1])
            {
                int v;
                v=t[i];
                t[i]=t[i+1];
                t[i+1]=v;
                ind=i;
            }
        }
        n=ind+1;
    }while(ind!=0);
    return t;
}

int * selectionsort(int*t,int n)
{
    for(int i=0; i<n; ++i)
    {
        int mini=i;
        for(int j=i+1; j<n; ++j)
        {
            if(t[mini]>t[j])
            {
                mini=j;
            }
            int v=t[i];
            t[i]=t[mini];
            t[mini]=v;
        }
    }
    return t;
}

int * insertionsort(int*t, int n)
{
    for(int i=2; i<=n; ++i)
    {
        int k=t[i];
        int j=i-1;
        while(j>0 && t[j]>k)
        {
            t[j+1]=t[j];
            j=j-1;
        }
        t[j+1]=k;
    }
    return t;
}

int * shellsort(int*x, int n, int*h, int hn)
{
    int t=hn,k,d,j;
    for(int s=t; s>=0; --s)
    {
        d=h[s];
        for(int i=d; i<n; ++i)
        {
            k=x[i];
            j=i-d;
            while(j>-1 && x[j]>k)
            {
                x[j+d]=x[j];
                j=j-d;
            }
            x[j+d]=k;
        }
    }
    return x;
}

int * countingsort(int*t, int n)
{
    int *b;
    for(int i=1; i<=n; ++i)
    {
        int k=1;
        for(int j=1; j<=n; ++j)
        {
            if(t[i]>t[j])
            {
                k=k+1;
            }
            b[k]=t[i];
        }
    }
    return t;
}

void mergesort(int*A,int left, int right)
{
    int mid;
    if(left<right)
    {
        mid=(left+right)/2;
        mergesort(A,left,mid);
        mergesort(A,mid+1,right);
        Merge(A,left,mid,right);
    }
}

void Merge(int*A,int left,int mid,int right)
{
    int i,j,k;
    int n1=mid-left+1;
    int n2=right-mid;
    int L[n1],R[n2];
    for(i=0; i<n1; ++i)
    {
        L[i]=A[left+i];
    }
    for(j=0; j<n2; ++j)
    {
        R[j]=A[mid+1+j];
    }
    i=0;
    j=0;
    k=left;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            A[k]=L[i];
            k++;
            i++;
        }
        else
        {
            A[k]=R[j];
            k++;
            j++;
        }
    }
    while(i<n1)
    {
        A[k]=L[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        A[k]=R[j];
        k++;
        j++;
    }
}

void quicksort(int*t, int left, int right)
{
    int j;
    if(left<right)
    {
        j=Partition(t,left,right);
        quicksort(t,left,j-1);
        quicksort(t,j+1,right);
    }
}

int Partition(int*a, int left, int right)
{
    int pivot,i,j,t;
    pivot=a[left];
    i=left; j=right+1;

    while(1)
    {
        do ++i; while(a[i]<=pivot && i<=right);
        do --j; while(a[j]>pivot);
        if(i>=j)
        {
            break;
        }
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    t=a[left];
    a[left]=a[j];
    a[j]=t;
    return j;
}

int * heapsort(int*t, int n)
{
    int i;
    for(i=(n/2)-1; i>=0; --i)
    {
        kupacol(t,n,i);
    }
    for(i=n-1; i>=0; --i)
    {
        int v=t[0];
        t[0]=t[i];
        t[i]=v;
        kupacol(t,i,0);
    }
    return t;
}

void kupacol(int*t, int n,int i)
{
    int ind=i,b=2*i+1,j=2*i+2;
    if(j<n && t[j]>t[ind])
    {
        ind=j;
    }
    if(b<n && t[b]>t[ind])
    {
        ind=b;
    }
    if(ind!=i)
    {
        int v=t[i];
        t[i]=t[ind];
        t[ind]=v;
        kupacol(t,n,ind);
    }
}
