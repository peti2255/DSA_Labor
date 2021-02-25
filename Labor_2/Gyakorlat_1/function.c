//
// Created by petee on 25/02/2021.
//
#include "functon.h"

int linearis_kereses(int* array,int n,int numb)
{
    for (int i = 0; i < n; ++i) {
        if(array[i]==numb)
        {
            return i;
        }
    }
}



