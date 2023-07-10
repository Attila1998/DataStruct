#include <stdio.h>
#include "Sort.h"

char* CreateArray(int n)
{
    char* Array = (char*)malloc(n*sizeof(char));
    //ellenorzes
    if(!Array){printf("foglalási hiba!");return 0;}

    return Array;
}

void FillWithRandomCharacters(char* Array,int n)
{

    for(int i=0;i<n;i++)
    {
        Array[i] = 'a'+rand()%('z'-'a'+1);
    }
}


void Print(char* Array,int n)
{
    printf("Char Array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%c ",Array[i]);
    }
    printf("\n");
}

void Sort(char *Array,int n,int id)
{
    switch(id)
    {
        case 0:
        //bublle sort
         bubbleSort(Array,n);
    break;

        case 1:
        //Insertion sort
        bubbleSort(Array,n);
    break;

        case 2:
        //Selection sort
        selectionSort(Array,n);
    break;

        case 3:

        shellSort(Array,n);

    break;

        case 4:
        //Merge sort
        mergeSort( Array,l,r)

    break;
        case 5:
        //Quick sort

        quickSort(Array,low,high)


    break;
            case 6:
        //Heap sort
        heapSort( Array, n)


    break;
            case 7:
        //qsort


    break;
            case 8:
        //Radix sort
        radixsort(Array,n)


    break;
            case 9:
        //Bucket sort
        bucketSort(Array,n)

    break;
    }
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void shellSort(char* Array, int n)
{
    // Start with a big gap, then reduce the gap
    for (int gap = n/2; gap > 0; gap /= 2)
    {
        // Do a gapped insertion sort for this gap size.
        // The first gap elements a[0..gap-1] are already in gapped order
        // keep adding one more element until the entire array is
        // gap sorted
        for (int i = gap; i < n; i += 1)
        {
            // add a[i] to the elements that have been gap sorted
            // save a[i] in temp and make a hole at position i
            char temp = Array[i];

            // shift earlier gap-sorted elements up until the correct
            // location for a[i] is found
            int j;
            for (j = i; j >= gap && Array[j - gap] > temp; j -= gap)
                Array[j] = Array[j - gap];

            //  put temp (the original a[i]) in its correct location
            Array[j] = temp;
        }
    }
    return 0;
}



// An optimized version of Bubble Sort
void bubbleSort(char* Array, int n)
{
   int i, j;
   bool swapped;
   for (i = 0; i < n-1; i++)
   {
     swapped = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (Array[j] > Array[j+1])
        {
           swap(&Array[j], &Array[j+1]);
           swapped = true;
        }
     }

     // IF no two elements were swapped by inner loop, then break
     if (swapped == false)
        break;
   }
}

/* Function to sort an array using insertion sort*/
void insertionSort(char* Array, int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = Array[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && Array[j] > key) {
            Array[j + 1] = Array[j];
            j = j - 1;
        }
        Array[j + 1] = key;
    }
}

void selectionSort(char* Array, int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (Array[j] < Array[min_idx])
            min_idx = j;

        // Swap the found minimum element with the first element
        swap(&Array[min_idx], &Array[i]);
    }
}

void merge(char* Array, int l, int m, int r)
{
    //left,middle,right
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    char L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = Array[l + i];
    for (j = 0; j < n2; j++)
        R[j] = Array[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            Array[k] = L[i];
            i++;
        }
        else
        {
            Array[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        Array[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        Array[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(char* Array, int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(Array, l, m);
        mergeSort(Array, m+1, r);

        merge(Array, l, m, r);
    }
}

int partition (char* Array, int low, int high)
{
    int pivot = Array[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than the pivot
        if (Array[j] < pivot)
        {
            i++;    // increment index of smaller element
            swap(&Array[i], &Array[j]);
        }
    }
    swap(&Array[i + 1], &Array[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(char* Array, int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(Array, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(Array, low, pi - 1);
        quickSort(Array, pi + 1, high);
    }
}

void heapSort(char* Array, int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(Array, n, i);

    // One by one extract an element from heap
    for (int i=n-1; i>0; i--)
    {
        // Move current root to end
        swap(Array[0], Array[i]);

        // call max heapify on the reduced heap
        heapify(Array, i, 0);
    }

// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void heapify(char Array, int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2*i + 1; // left = 2*i + 1
    int r = 2*i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && Array[l] > Array[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && Array[r] > Array[largest])
        largest = r;

    // If largest is not root
    if (largest != i)
    {
        swap(Array[i], Array[largest]);

        // Recursively heapify the affected sub-tree
        heapify(Array, n, largest);
    }
}


// A utility function to get maximum value in arr[]
int getMax(char* Array, int n)
{
    int mx = Array[0];
    for (int i = 1; i < n; i++)
        if (Array[i] > mx)
            mx = Array[i];
    return mx;
}

// A function to do counting sort of arr[] according to
// the digit represented by exp.
void countSort(char* Array, int n, int exp)
{
    int output[n]; // output array
    int i, count[10] = {0};

    // Store count of occurrences in count[]
    for (i = 0; i < n; i++)
        count[ (Array[i]/exp)%10 ]++;

    // Change count[i] so that count[i] now contains actual
    //  position of this digit in output[]
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build the output array
    for (i = n - 1; i >= 0; i--)
    {
        output[count[ (Array[i]/exp)%10 ] - 1] = Array[i];
        count[ (Array[i]/exp)%10 ]--;
    }

    // Copy the output array to arr[], so that arr[] now
    // contains sorted numbers according to current digit
    for (i = 0; i < n; i++)
        Array[i] = output[i];
}

// The main function to that sorts arr[] of size n using
// Radix Sort
void radixsort(char* Array, int n)
{
    // Find the maximum number to know number of digits
    int m = getMax(Array, n);

    // Do counting sort for every digit. Note that instead
    // of passing digit number, exp is passed. exp is 10^i
    // where i is current digit number
    for (int exp = 1; m/exp > 0; exp *= 10)
        countSort(Array, n, exp);
}

// Function to sort arr[] of size n using bucket sort
void bucketSort(char* Array, int n)
{
    // 1) Create n empty buckets
    vector<float> b[n];

    // 2) Put array elements in different buckets
    for (int i=0; i<n; i++)
    {
       int bi = n*Array[i]; // Index in bucket
       b[bi].push_back(Array[i]);
    }

    // 3) Sort individual buckets
    for (int i=0; i<n; i++)
       sort(b[i].begin(), b[i].end());

    // 4) Concatenate all buckets into arr[]
    int index = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < b[i].size(); j++)
          Array[index++] = b[i][j];
}
