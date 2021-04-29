//
// Created by petee on 4/29/2021.
//

#include "AutoVerem.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include "Auto.h"

Node* create() {
    Node* node = (Node*)malloc(sizeof(Node));

    if(!node) {
        printf("Error while allocating node!");
        return NULL;
    }

    node->next = NULL;

    return node;
}

void push(Node** topPtr, Auto* data) {
    Node* newNode = create();

    if(!newNode) {
        printf("Error while allocating new node!");
        return;
    }

    newNode->data = data;
    newNode->next = *topPtr;
    *topPtr = newNode;
}

bool isEmpty(Node* topPtr) {
    return topPtr->next == NULL;
}

Auto *top(Node* topPtr) {
    if(!isEmpty(topPtr))
        return topPtr->data;
    else
    {
        printf("A verem ures");
        return NULL;
    }

}

Auto *pop(Node** topPtr) {
    if(isEmpty(*topPtr))
        return INT_MIN;

    Node* aux = *topPtr;
    int auxData = aux->data;
    *topPtr = aux->next;

    free(aux);

    return auxData;
}
void traverse(Node* front) {
    if(front == NULL || front->next == NULL) {
        printf("\n");
        return;
    }

    print(front->data);
    traverse((Node*) front->next);
}