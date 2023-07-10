#include<stdio.h>
#include<stdlib.h>

int main()
{
    /* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80
    struct node *root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);*/

    /* Let us create following BST
              2
           /     \
          7       5
         /  \      \
        2    6      9
            / \     /
            5  11   4
            */
    struct node *root = NULL;
    root = insert(root, 2);
    root = insert(root, 7);
    root = insert(root, 2);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);


    printf("Inorder traversal of the given tree \n");
    inorder(root);

   /* printf("\nDelete 20\n");
    root = deleteNode(root, 20);
    printf("Inorder traversal of the modified tree \n");
    inorder(root);

    printf("\nDelete 30\n");
    root = deleteNode(root, 30);
    printf("Inorder traversal of the modified tree \n");
    inorder(root);

    printf("\nDelete 50\n");
    root = deleteNode(root, 50);
    printf("Inorder traversal of the modified tree \n");
    inorder(root);
*/
    return 0;
}
