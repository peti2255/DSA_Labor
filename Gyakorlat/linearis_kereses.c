//
// Created by petee on 25/02/2021.
//
#include "linearis_kereses.h"
#include <stdio.h>

int linearis_kereses(int* array,int n,int num){

    for (int i = 0; i < n; ++i) {
        if(array[i]==num)
        {
            return i;
        }

    }
    return -1;
}
void kiir(int* array,int n)
{
    for (int i = 0; i < n; ++i) {
        printf("%i ",array[i]);
    }
    printf("\n");
}
