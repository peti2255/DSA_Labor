#include <stdio.h>
#include "function.h"

int main() {
    int a,b,c;
    printf("a=");
    scanf("%i",&a);
    printf("b=");
    scanf("%i",&b);
    printf("c=");
    scanf("%i",&c);
    int del = delta(a,b,c);
    megoldas(a,b,del);

    return 0;
}
