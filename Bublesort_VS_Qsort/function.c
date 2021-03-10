//
// Created by petee on 3/10/2021.
//

#include "function.h"
#include <stdlib.h>
#include <stdbool.h>
void Buborek(int* array,int n)
{
    bool talalt=false;
    do {
        talalt =false;
        for (int i = 0; i < n; ++i) {
            if(array[i] > array[i+1])
            {
                talalt = true;
                int s=array[i];
                array[i] = array[i+1];
                array[i+1] = s;
            }
        }
    } while (talalt);
}

int compare(const void* a,const void* b)
{
    return *(int*)a-*(int*)b;
}
void rendezes(int* array,int n)
{
    qsort(array,n,sizeof(int),compare);
}
