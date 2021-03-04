//
// Created by petee on 04/03/2021.
//

#include "function.h"
int binarisKereses(int *array, int e, int v, int number) {
    int k;
    while (e <= v) {
        k = e + (v - 1) / 2;
        if (number == array[k]) {
            return k;
        }
        if (number < array[k]) {
            v = k - 1;
        }
        else
        {
            e = k + 1;
        }

    }
    return -1;
}