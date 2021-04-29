//
// Created by petee on 4/29/2021.
//

#ifndef PARCIALIS_AUTOVEREM_H
#define PARCIALIS_AUTOVEREM_H

#include <stdbool.h>
#include <stdio.h>
#include "Auto.h"

typedef struct {
    Auto* data;
    struct Node* next;
} Node;

Node* create();

void push(Node** topPtr, Auto* data);

Auto *top(Node* topPtr);
Auto *pop(Node** topPtr);

bool isEmpty(Node* topPtr);

void traverse(Node* front);
#endif //PARCIALIS_AUTOVEREM_H
