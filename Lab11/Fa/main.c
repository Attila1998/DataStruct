#include <stdio.h>
#include <stdlib.h>
#inlcude "fa.h"

int main()
{
    TreeItem* fa = Create();
    Insert(fa,10);
    printf("A fa inorder bejarasa\n");
    Inorder(fa);
    return 0;
}
