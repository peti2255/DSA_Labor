//
// Created by petee on 3/25/2021.
//

#include <stdlib.h>
#include "Queue.h"

ListItem* creat() {
    ListItem *newList = (ListItem*)malloc(sizeof (struct ListItem*));
    newList->next = NULL;
    return newList;
}
void insert (ListItem **first,ListItem* last,int data)
{

}
