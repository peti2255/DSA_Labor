#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "linearis_kereses.c"

int main() {
    int n,num;
    printf("n=");
    scanf("%i",&n);
    int* array=(int*)malloc(n*sizeof (int));
    srand(time(NULL));
    printf("Add meg a keresett elemet: ");
    scanf("%i",&num);
        if(array==NULL)
        {
            printf("Hibas helyfogalalas");
            return -1;
        }
    for (int i = 0; i < n; ++i) {
        array[i]=rand()%100;
    }
    kiir(array,n);
    if(linearis_kereses(array,n,num)==-1)
    {
        printf("A keresett elem nincs a tombbe");
    }
    eles
    {
        printf("A keresett elem: %i",linearis_kereses(array,n,num));
    }

    return 0;
}
