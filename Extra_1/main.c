#include <stdio.h>
#include <stdlib.h>
#include "Function.h"
int main() {
    int n;
    printf("n=");
    scanf("%i",&n);
    int* array=(int*)malloc(n*sizeof (int));
    if (array == NULL)
    {
        printf("Hiba!");
        return -1;
    }
    feltolt(array,n);
    if(csucs(array,n)<= 0)
    {
        printf("Nincs csucs a tombbe!\n");
    }
    else
    {
        kiir(array,n);
        printf("\nCsucs: %i",array[csucs(array,n)]);
        printf("\nCsucsindex: %i",csucs(array,n));

    }
    free(array);
    return 0;
}
