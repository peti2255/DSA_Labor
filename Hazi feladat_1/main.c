#include <stdio.h>
#include "function.h"
int main() {
    int mp;
    printf("Masodperc: ");
    scanf("%i",&mp);
    float p=idovizsgaloPerc(mp);
    int P=p;
    p -= P;
    p *=60;

    float h=idovizsgaloOra(P);
    int H = h;
    h -= H;
    h *= 60;

    printf("%i Ora, %.2f perc, %.2f masodperc",H,h,p );
    return 0;
}
