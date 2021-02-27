//
// Created by petee on 27/02/2021.
//
#include <stdio.h>
#include <stdlib.h>
#include "Function.h"

void feltolt(int* array,int n)
{
    for (int i = 0; i < n; ++i) {
        printf("%i. elem:",i);
        scanf("%i" ,&array[i]);
    }
}
void kiir(int* array,int n)
{
    for (int i = 0; i < n; ++i) {
        printf("%i ",array[i]);
    }
}
int csucs(int* array,int n)
{
    int i=1, maxi=-1;

    if( n < 3)
        return maxi;
    maxi++;

    int max=array[0];
    while(i < n-1)
    {
        if (array[i-1] < array[i] && array[i+1] < array[i] && max < array[i])
        {
            max=array[i];
            maxi=i;

        }

        i++;
    }
    if(array[n-1] > max)
    {
        maxi = n-1;
    }

    return maxi;

}
