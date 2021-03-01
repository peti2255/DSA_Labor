#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "linearis_kereses.h"

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
        array[i]=rand()%99;

    }
    printf("A tomb elemei: ");
    rendezes(array,n);
    egyszeru(array,n);
    kiir(array,n);
    int linear =linearis_kereses(array,n,num), binary = binarisKereses(array,0,n,num);
    if(linear==-1)
    {
        printf("A keresett elem nincs a tombbe(Linearis) :( \n" );
    }
    else
    {
        printf("Linearis kereses: %i \n",linear);
    }
    if(binary == -1)
    {
        printf("A keresett elem nincs a tombben(Binaris) :( \n");
    }else
    {
        printf("Binaris Kereses: %i \n",binary);
    }

    free(array);
    return 0;
}
