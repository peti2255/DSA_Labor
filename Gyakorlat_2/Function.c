//
// Created by petee on 3/16/2021.
//

#include "Function.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

IntArray* creatArray(int dimension)
{
    IntArray* array = (IntArray*)malloc(sizeof (IntArray));
    array->element = (int*)malloc(dimension*sizeof (int));
    array->size = dimension;
    return array;

    }
void destroyArray(IntArray* array){
    if(array == NULL)
    {
        printf("Sikertelen helyfoglalas");
        exit(1);
}
}
void readArray(const char *fileName, IntArray *array)
{
    FILE * input = fopen(fileName, "r");
    //ellenorzes
    if(fileName == NULL)
    {
        printf("Sikertelen allomany meghivas");
        exit(1);
    }
    // beolvasas
    fscanf(input,"%i ",&array->size);
    for (int i = 0; i < array->size; ++i) {
        fscanf(input,"%i",&array->element[i]);
    }
}
void fillArray(IntArray* array, int dimension, int first, int last)
{
    srand(time(NULL));
    for (int i = 0; i < array->size; ++i) {
        array->element[i] = rand() % (first + 1 - last) + first;
    }

}
void printArray(IntArray* array)
{
    for (int i = 0; i < array->size; ++i) {
        printf("%i ",array->element[i]);
    }
    printf("\n");
}
void printArrayToFile(const char* fileName, IntArray* array)
{
    FILE * input = fopen(fileName, "w");
    //ellenorzes
    if(fileName == NULL)
    {
        printf("Sikertelen allomany meghivas");
        exit(1);
    }
    for (int i = 0; i <array->size; ++i) {
        fprintf(input,"%i ",array->element[i]);
    }
}
void sortArray(IntArray* array)
{
    qsort(array->element, array->size, sizeof(int ), cmp);
}
int cmp(const void* a,const void *b)
{
    return *(int*)a-*(int*)b;
}
int findElement(IntArray *array, int element)
{
//    int k;
//    int e = 0,v = array->size;
//    while (e <= v) {
//        k = (e + v) / 2;
//        if (element == array->element[k]) {
//            return k;
//        }
//        if (element < array->element[k]) {
//            v = k - 1;
//        }
//        else
//        {
//            e = k + 1;
//        }
//
//    }
//    return -1;
    int find = binarySearch(array,0,array->size,element);
    if (find != 0)
        return find;
    else
        return -1;

}
void deleteElement(IntArray *array,int element)
{
    for (int i = 0; i < array->size; ++i) {
        if(array->element[i] == element)
        {
            int j = i;
            while (j != array->size)
            {
                array->element[j] = array->element[j+1];
                j++;
            }
           array->size -=1 ;
        }
    }
}
int minimum(IntArray* array)
{
    int mini = array->element[0];
    for (int i = 0; i < array->size; ++i) {
        if(array->element[i] < mini)
        {
            mini = array->element[i];
        }
    }
    return mini;
}
int maximum(IntArray* array)
{
    int maxi = array->element[0];
    for (int i = 0; i < array->size; ++i) {
        if(array->element[i] > maxi)
            maxi = array->element[i];
    }
    return maxi;
}
void copy(IntArray* arrayTo,IntArray* arrayFrom)
{
    if(arrayFrom->size  <= arrayTo->size)
    {
        for (int i = 0; i < arrayFrom->size ; ++i) {
                arrayTo->element[i] = arrayFrom->element[i];
        }
    }
    else
        printf("Nem lehetseges\n");
}
int linearSearch(IntArray* array, int element)
{
    for (int i = 0; i < array->size; ++i) {
        if(array->element[i] == element)
            return i;
    }
}
int binarySearch(IntArray* array, int start,int end, int element)
{
    int k;
    int e = 0,v = array->size;
    while (e <= v) {
        k = (e + v) / 2;
        if (element == array->element[k]) {
            return k;
        }
        if (element < array->element[k]) {
            v = k - 1;
        }
        else
        {
            e = k + 1;
        }

    }
    return -1;
}