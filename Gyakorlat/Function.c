//
// Created by petee on 3/18/2021.
//

#include "Function.h"
#include <stdlib.h>
#include <stdio.h>
STACK* create(int capacity)
{
    STACK* Stack = (STACK *)calloc(1, sizeof(STACK));
    if(Stack == NULL)
    {
        printf("Sikertelen helyfoglalas");
        exit(1);

    }
    Stack->maxSize =capacity;
    Stack->sp = -1;
    int* item=(int*)malloc(capacity * sizeof (int));
    if(item == NULL)
    {
        printf("Sikertelen helyfoglalas");
        exit(1);

    }
    return Stack;
}
void destroy(STACK* myStack)
{
    free(myStack->items);
    free(myStack);
}

bool isFull(STACK *myStack) {
     if(myStack->sp == myStack->maxSize-1 )
        return true;
    return  false;
}

void push(STACK *myStack, int item) {
    if(!isFull(myStack))
    {
        myStack->sp++;
        myStack->items[myStack->sp] = item;
    } else
    {
        printf("A verem teli");
    }
}

void pop(STACK *myStack) {
    if (isEmpty(myStack) == false)
    {
        myStack->items[myStack->sp] = 0;
        myStack->sp--;
    } else {
        printf("A veresm ures");
    }
}

int top(STACK *myStack) {
    if(isFull(myStack) == false)
        return myStack->items[myStack->sp];
    else
        return -1;
}

void printStack(STACK *myStack) {
    for (int i = myStack->sp; i >= 0; --i) {
        printf("| %i |\n",myStack->items[i]);
        printf(" _ _ \n");
    }
}

bool isEmpty(STACK *myStack) {
    if(myStack->sp == -1)
        return false;
}

