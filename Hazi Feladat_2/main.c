#include <stdio.h>
#include "function.h"

int main() {
    int a1,a2,b1,b2;
    printf("Add meg az elso pont koordinatait :");
        scanf("%i",&a1);
        scanf("%i",&a2);
    printf("Add meg a masodik pont koordinatait: ");
        scanf("%i",&b1);
        scanf("%i",&b2);
    printf("A ket pont kozotti tavolsag: %i",tavolsag(a1,a2,b1,b2));
    return 0;
}
