//
// Created by petee on 3/25/2021.
//

#ifndef GYAKORLAT_STACK_H
#define GYAKORLAT_STACK_H

#include <stdbool.h>

typedef struct NodeType{
    int info;
    struct NodeType *prev;
}NodeType;
struct NodeType *create();
int top(NodeType*topPtr);
void pop(NodeType**topPtr);
void push(NodeType **topPtr, int data);
void printStack( NodeType *topPtr);
bool isEmpty( NodeType *nodeType);

#endif //GYAKORLAT_STACK_H
