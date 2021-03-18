//
// Created by petee on 3/16/2021.
//

#ifndef GYAKORLAT_2_FUNCTION_H
#define GYAKORLAT_2_FUNCTION_H

typedef struct IntArray{
    int size;
    int *element;
}IntArray;

IntArray* creatArray(int dimension);
void destroyArray(IntArray* array);
void readArray(const char *filename,IntArray* *array);
void fillArray(IntArray* array, int dimension, int first, int last);
void printArray(IntArray* array);
void printArrayToFile(const char* fileName, IntArray* array);
void sortArray(IntArray *array);
int findElement(IntArray *array, int element);
void deleteElement(IntArray *array,int element);
int minimum(IntArray* array);
int maximum(IntArray* array);
void copy(IntArray* arrayTo,IntArray* arrayFrom);
int linearSearch(IntArray* array, int element);
int binarySearch(IntArray* array, int start,int end, int element);
int cmp(const void *, const void *);
#endif //GYAKORLAT_2_FUNCTION_H
