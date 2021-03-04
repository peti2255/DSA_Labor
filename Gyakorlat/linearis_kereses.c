//
// Created by petee on 25/02/2021.
//
#include "linearis_kereses.h"
#include <stdio.h>
#include <stdbool.h>

int linearis_kereses(int *array, int n, int num) {

    for (int i = 0; i < n; ++i) {
        if (array[i] == num) {
            return i;
        }

    }
    return -1;
}

void kiir(int *array, int n) {
    for (int i = 0; i < n; ++i) {
        printf("%i ", array[i]);
    }
    printf("\n");
}

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
void rendezes(int* array,int n)
{
    int i = n;
    bool talalt;
    do {
        talalt = false;
        for (int j = 0; j < n; ++j) {
            if(array[j] > array[j+1])
            {
                talalt = true;
                int s = array[j];
                array[j] = array[j+1];
                array[j+1] = s;
            }

        }
        i--;
    } while (talalt);
}
