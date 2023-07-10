#include <stdio.h>
#include <stdlib.h>

int main()
{
    int[] a = {1,2,3};
    int[] b = Arrays.copyOfRange(a, 0, a.length);
    a[0] = 5;
    System.out.println(Arrays.toString(a)); // [5,2,3]
    System.out.println(Arrays.toString(b)); // [1,2,3]
}
}
