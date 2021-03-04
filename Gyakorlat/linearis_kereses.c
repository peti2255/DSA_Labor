//
// Created by petee on 25/02/2021.
//
#include "linearis_kereses.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int linearis_kereses(int *array, int n, int num) {

    int osszehasonlitasokszama = 0;
    for (int i = 0; i < n; ++i) {
        osszehasonlitasokszama++;
        if (array[i] == num) {

        }

    }
    return osszehasonlitasokszama;
}

void kiir(int *array, int n) {
    for (int i = 0; i < n; ++i) {
        printf("%i ", array[i]);
    }
    printf("\n");
}

int binarisKereses(int *array, int e, int v, int number) {
    int k;
    int osszehasonlitasokszama = 0;
    while (e <= v) {
        k = e + (v - 1) / 2;
        osszehasonlitasokszama++;
        if (number == array[k]) {
            return osszehasonlitasokszama;
        }
        if (number < array[k]) {
            v = k - 1;
        }
        else
        {
            e = k + 1;
        }

    }
    return osszehasonlitasokszama;
}
// negativ -1 => nem kell csere
// pozitiv 1 => kell csere
// 0 => egyenlok
int compare(const void* a,const void* b)
{
    int num1 =*(int*)a;
    int num2 =*(int*)b;
    if(num1<num2)
        return -1;
    else if(num2 < num1)
        return 1;
    else
        return 0;
}
void rendezes(int* array,int n)
{
    qsort(array,n,sizeof(int),compare);
}
