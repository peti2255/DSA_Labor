#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "function.h"

int main() {
    int n,num;
//    printf("n=");
//    scanf("%i",&n);
    srand(time(NULL));
    for (int n=10;n<=1000000; n*=10) {

        int* array=(int*)malloc(n*sizeof (int));
        if(array==NULL)
        {
            printf("Hibas helyfogalalas");
            return -1;
        }
        for (int i = 0; i < n; ++i) {
            array[i]=rand()%99;

        }

        free(array);
    }


//    printf("Add meg a keresett elemet: ");
//    scanf("%i",&num);


//    if(linear==-1)
//    {
//        printf("A keresett elem nincs a tombbe(Linearis) :( \n" );
//    }
//    else
//    {
//        printf("Linearis kereses: %i \n",linear);
//    }

//    if(binary == -1)
//    {
//        printf("A keresett elem nincs a tombben(Binaris) :( \n");
//    }else
//    {
//        printf("Binaris Kereses: %i \n",binary);
//    }
    return 0;
}
