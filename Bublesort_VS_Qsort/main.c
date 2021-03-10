#include <stdio.h>
#include <stdlib.h>
#include "function.h"
#include <time.h>

int main() {
    srand(time(NULL));
    for (int n=10;n<=10000;n*=10) {
        int *array=(int*)malloc(n*sizeof(int));
        if(array==NULL)
        {
            printf("Hibas helyfogalalas");
            return -1;
        }

        for (int i = 0; i < n; ++i) {
            array[i]=rand()%100;

        }

        clock_t start,end;
        double cpu_time_used;

        start = clock();
        Buborek(array,n);
        _sleep(3);
        end = clock();
        cpu_time_used = ((double ) (end-start)) / CLOCKS_PER_SEC;
        printf("%i - Elapsed time Buborek: %lf\n",n,cpu_time_used);
        free(array);
        array=(int*)malloc(n*sizeof(int));
        if(array==NULL)
        {
            printf("Hibas helyfogalalas");
            return -1;
        }
        for (int i = 0; i < n; ++i) {
            array[i]=rand()%100;

        }

        start = clock();
        rendezes(array,n);
        _sleep(3);
        end = clock();
        cpu_time_used = ((double ) (end-start)) / CLOCKS_PER_SEC;
        printf("%i - Elapsed time Qsort: %lf\n",n,cpu_time_used);
        free(array);
    }
    return 0;
}

