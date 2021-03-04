#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "linearis_kereses.h"

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
        rendezes(array,n);
        clock_t start,end;
        double cpu_time_used;
        // elso elem: array[0];
        start = clock();
        printf("Compare: %i\n",linearis_kereses(array,n,array[0]));
        _sleep(3);
        end = clock();
        cpu_time_used = ((double ) (end-start)) / CLOCKS_PER_SEC;
        printf("%i - elso elem Elapsed time: %lf\n",n,cpu_time_used);
        // nem letezo elem : -1
        start = clock();
        printf("Compare: %i\n",linearis_kereses(array,n,-1));
        _sleep(3);
        end = clock();
        cpu_time_used = ((double ) (end-start)) / CLOCKS_PER_SEC;
        printf("%i - nem letezo Elapsed time: %lf\n",n,cpu_time_used);
        // kozepso elem array[n/2]
        start = clock();
        printf("Compare: %i\n",linearis_kereses(array,n,array[n/2]));
        _sleep(3);
        end = clock();
        cpu_time_used = ((double ) (end-start)) / CLOCKS_PER_SEC;
        printf("%i - kozepso Elapsed time: %lf\n",n,cpu_time_used);
        // utolso elem array[n-1];
        start = clock();
        printf("Compare: %i\n",linearis_kereses(array,n,array[n-1]));
        _sleep(3);
        end = clock();
        cpu_time_used = ((double ) (end-start)) / CLOCKS_PER_SEC;
        printf("%i - utolso elem Elapsed time: %lf\n\n",n,cpu_time_used);

        start = clock();
        printf("Result: %i\n",binarisKereses(array,0,n-1,array[0]));
        _sleep(3);
        end = clock();
        cpu_time_used = ((double ) (end-start)) / CLOCKS_PER_SEC;
        printf("%i - kozepso Elapsed time: %lf => ",n,cpu_time_used);
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
