#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "linearis_kereses.h"

int main() {
    int n;
    printf("n=");
    scanf("%i", &n);
    srand(time(NULL));

    int *array = (int *) malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Hibas helyfogalalas");
        return -1;
    }
    for (int i = 0; i < n; ++i) {
        array[i] = rand() % 100;

    }
    rendezes(array, n);
    clock_t start, end;
    double cpu_time_used;
    // elso elem: array[0];
    start = clock();
    printf("Compare: %i ", linearis_kereses(array, n, array[0]));
    _sleep(3);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%i - elso elem Elapsed time C: %lf\n", n, cpu_time_used);
    // nem letezo elem : -1
    start = clock();
    printf("Compare: %i ", linearis_kereses(array, n, -1));
    _sleep(3);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%i - nem letezo Elapsed time C: %lf\n", n, cpu_time_used);
    // kozepso elem array[n/2]
    start = clock();
    printf("Compare: %i ", linearis_kereses(array, n, array[n / 2]));
    _sleep(3);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%i - kozepso Elapsed time C: %lf\n", n, cpu_time_used);
    // utolso elem array[n-1];
    start = clock();
    printf("Compare: %i ", linearis_kereses(array, n, array[rand()%50]));
    _sleep(3);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%i - belso Elapsed time C: %lf\n", n, cpu_time_used);
    // belso elem array[rand %50]
    start = clock();
    printf("Compare: %i ", linearis_kereses(array, n, array[n - 1]));
    _sleep(3);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%i - utolso elem Elapsed time C: %lf\n\n", n, cpu_time_used);


    start = clock();
    printf("Result: %i ", binarisKereses(array, 0, n - 1, array[n / 2]));
    _sleep(3);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%i - kozepso Elapsed time B: %lf  \n", n, cpu_time_used);


    start = clock();
    printf("Result: %i ", binarisKereses(array, 0, n - 1, array[0]));
    _sleep(3);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%i - elso Elapsed time B: %lf \n", n, cpu_time_used);


    start = clock();
    printf("Result: %i ", binarisKereses(array, 0, n - 1, array[n - 1]));
    _sleep(3);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%i - utolso Elapsed time B: %lf \n", n, cpu_time_used);

    start = clock();
    printf("Result: %i ", binarisKereses(array, 0, n - 1, array[rand()%50]));
    _sleep(3);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%i - belso Elapsed time B: %lf \n", n, cpu_time_used);

    start = clock();
    printf("Result: %i ", binarisKereses(array, 0, n - 1, -1));
    _sleep(3);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%i - nem letezo Elapsed time B: %lf \n", n, cpu_time_used);

    printf("\n");
    free(array);

    return 0;
}
