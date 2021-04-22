//
// Created by petee on 4/22/2021.
//

#include "Function.h"
#include <stdlib.h>
#include <stdio.h>

struct root *minValueNode(struct root *pRoot);

root *create(int data)
{
    root* node = (root*)malloc(sizeof (root));
    if(!node)
    {
        printf("Sikertelen lefoglalas");
        exit(1);
    }
    node->data = data;
    node->right = NULL;
    node->left = NULL;

    return node;
}

struct root *minValueNode(struct root *pRoot) {
    struct root* current = pRoot;

    /* loop down to find the leftmost leaf */
    while (current && current->left != NULL)
        current = current->left;

    return current;
}

root *delete(root *tree, int data) {
    if(tree == NULL)
    {
        printf("Nem lehetseges :(");
        return tree;
    }
    if (tree->data > data)
    {
        tree->left = delete(tree->left,data);
    }
    else if(tree->data < data)
    {
        tree->right = delete(tree->right,data);
    }
    else{
        if (tree->left == NULL) {
            struct root* temp = tree->right;
            free(tree);
            return temp;
    }
        else if (tree->right == NULL) {
            struct root* temp =tree->left;
            free(tree);
            return temp;
        }
        struct root* temp = minValueNode(tree->right);
        tree->data = temp->data;
        tree->right = delete(tree->right, temp->data);
    }
    return tree;
}

root *insert(root *tree, int data) {
    if(tree == NULL)
    {
        return create(data);
    }
    else
    {
        if(tree->data > data)
           tree->left =  insert(tree->left,data);
        else tree->right = insert(tree->right,data);
    }
    return tree;
}

void inorder(root *tree) {

    {
        if(tree->left)
            inorder(tree->left);
        printf("%3d ", tree->data);
        if(tree->right)
            inorder(tree->right);
    }

}

void preorder(root *tree) {
    {
        printf("%3d ",tree->data);
        if(tree->left)
            preorder(tree->left);
        if(tree->right)
            preorder(tree->right);
    }

}

void postorder(root *tree) {
    {
        if(tree->left)
            postorder(tree->left);
        if(tree->right)
            postorder(tree->right);
        printf("%3d ", tree->data);
    }
}

void destroy(root **tree) {
    if(*tree!=NULL){
        destroy(&(*tree)->left);
        destroy(&(*tree)->right);
        free(*tree);
        (*tree)=NULL;
    }
}

int findMinforN(root* root, int N)
{
    if (root->left == NULL && root->right == NULL && root->data < N)
        return -1;
    if ((root->data >= N && root->left == NULL) || (root->data >= N && root->left->data < N))
        return root->data;
    if (root->data <= N)
        return findMinforN(root->right, N);
    else
        return findMinforN(root->left, N);
}

int findMaxforN(root *root, int N) {
    if (root->left == NULL && root->right == NULL && root->data < N)
        return -1;
    if ((root->data  <= N && root->left == NULL) || (root->data <= N && root->left->data < N))
        return root->data;
    if (root->data >= N)
        return findMinforN(root->right, N);
    else
        return findMinforN(root->left, N);
}




