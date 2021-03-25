//
// Created by petee on 3/25/2021.
//

#include "Stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

NodeType *create() {
NodeType *newNode = (NodeType *) malloc(sizeof(struct Node *));
newNode->prev = NULL;
return newNode;
}
void push(NodeType **topPtr, int data) {
    NodeType *newNode = create();
    newNode->info = data;
    newNode->prev = *topPtr;
    *topPtr=newNode;
}

int top(NodeType *topPtr) {
    if(topPtr!=0){
        return topPtr->info;
    }
}
void pop(NodeType **topPtr)
{
    if (!isEmpty(*topPtr))
    {
        NodeType *aux;
       // int auxinfo;
        aux = *topPtr;
        *topPtr = aux->prev;
       // auxinfo = aux->info;
        free(aux);
       // return auxinfo
    }
//    else
//        printf("A verem ures.");
//
//    return INT_MIN;

}
void printStack(NodeType *topPtr)
{
    struct NodeType* aux = topPtr;
    while (aux != NULL)
    {
        printf("%i " ,aux->info);
        aux = aux->prev;
    }
    printf("\n");
}
bool isEmpty(NodeType *topPtr) {
    if(topPtr == NULL){
        return true;
    }
    else{
        return false;
    }
}