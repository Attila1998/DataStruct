#include <stdio.h>
#include <stdlib.h>

int main()
{
    TreeItem* fa = Create();
    Insert(fa,10);
    Insert(fa,5);
    Insert(fa,3);
    Insert(fa,2);
    Insert(fa,4);
    printf("A fa inorder bejarasa\n");
    Inorder(fa);
    return 0;
}
