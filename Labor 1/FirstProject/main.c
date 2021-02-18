#include <stdio.h>
#include "functions.h"
int main() {
    //3.feladat
    int a, b;
    printf("a=");
    scanf("%i",&a);
    printf("b=");
    scanf("%i",&b);
    printf("Osszeg: %i\n",osszeg(a,b));

    int a1,b1,c1;
    printf("a1=");
    scanf("%i",&a1);
    printf("b1=");
    scanf("%i",&b1);
    printf("c1=");
    scanf("%i",&c1);
    printf("Maxmimun: %i\n",max(a1,b1,c1));
    printf("Minimum: %i\n",min(a1,b1,c1));
    //Feladat 4.
    int *array;
    int n;
    printf("A tomb nagysaga ");
    scanf("%i",&n);
    array=(int*)malloc(n*sizeof(int));
    beolvas(array,n);
    kiir(array,n);


    return 0;

}
