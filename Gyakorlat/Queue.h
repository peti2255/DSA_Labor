//
// Created by petee on 3/25/2021.
//

#ifndef GYAKORLAT_QUEUE_H
#define GYAKORLAT_QUEUE_H

#include <stdbool.h>

typedef struct ListItem
{
    int info;
    struct ListItem *next;
} ListItem;
ListItem *fron, *last;
ListItem* creat();
int get( ListItem* first);
void delete(ListItem* first);
void insert(ListItem **first,ListItem * last,int data);
void printQueue(ListItem *topPtr);
bool isEmpty( ListItem *nodeType);
#endif //GYAKORLAT_QUEUE_H
