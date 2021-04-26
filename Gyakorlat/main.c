#include <stdio.h>
#include "Function.h"

int main() {
    struct root* bst = NULL;
    bst = insert(bst, 50);
    bst = insert(bst, 30);
    bst = insert(bst, 20);
    bst = insert(bst, 40);
    bst = insert(bst, 70);
    bst = insert(bst, 60);
    bst = insert(bst, 80);
    printf("Inorder traversal of the given tree \n");
    inorder(bst);
    printf("\nDelete 20\n");
    bst = delete(bst, 20);
    printf("Preorder traversal of the modified tree \n");
    preorder(bst);
    printf("\nDelete 30\n");
    bst = delete(bst, 30);
    printf("Postorder traversal of the modified tree \n");
    postorder(bst);
    printf("\nDelete 50\n");
    bst = delete(bst, 50);
    printf("Inorder traversal of the modified tree \n");
    inorder(bst);
    printf("\n");
    int n;
    printf("n= ");
    scanf("%i",&n);
    printf("Find %3d\n",findMinforN(bst,n));
    int m;
    printf("m= ");
    scanf("%i",&m);
    printf("Find %3d\n",findMaxforN(bst,m));

    destroy(&bst);
}
