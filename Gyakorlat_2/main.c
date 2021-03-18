#include <stdio.h>
#include <stdlib.h>
#include "Function.h"

int main() {
    int dimension = 10,first = 10,last= 100,element = 66,dimension1 = 15,element1 = 56;
//    printf("Fisrt");
//    scanf("%i",&first);
//    printf("Last");
//    scanf("%i",&last);
//    printf("Keresett elem");
//    scanf("%i",&element);

    IntArray* array = creatArray(dimension);
    IntArray* arrayto = creatArray(dimension1);
    IntArray *array2;
    readArray("IntArray.txt", &array2);
    printf("Allomany tartalma: ");
    printArray(array2);
    fillArray( array, dimension, first, last);
    printf("Random szammal feltoltott tomb: ");
    printArray(array);
    printArrayToFile("IntArrayout.txt",array);
    sortArray(array);
    printf("Rendezett tomb :");
    printArray(array);
    if(findElement(array,element)!= -1)
        printf("A keresett elem a %i-ik pozicion van \n",findElement(array,element));
    else
        printf("A keresett elem nincs a tombben \n");
    deleteElement(array,element);
    printf("Torolt elem utanni tomb: ");
    printArray(array);
    printf("Leggisebb elen a tombe: %i\n",minimum(array));
    printf("Legnagyobb elen a tombe: %i\n",maximum(array));
    copy(arrayto,array);
    printArray(arrayto);
    printf("A keresett elem a %i-ik pozicion van (Linear) \n",linearSearch(array,element1));
    printf("A keresett elem a %i-ik pozicion van (Binary) \n",binarySearch(array,0,array->size,element1));
    destroyArray(array);
    destroyArray(array2);
    destroyArray(arrayto);
    return 0;
}
