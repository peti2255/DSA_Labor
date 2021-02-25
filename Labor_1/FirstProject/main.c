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
    int a, b, num1,num2,num3;


    scanf("%i", &num1);
    scanf("%i", &num2);


    printf("\nszorzat: %i", szorzat(num2, num1));
    double number1,number2,number3;
    printf("\nAdd meg a harom szamot :");
    scanf("%lf%lf%lf",&number1,&number2,&number3);
    printf("\nA harom szam atlaga = %.2lf \n",atlag(number1,number2,number3));
    printf("\nKet szam mertani kozepe: %.2lf",mertanikozep(number1,number2));
    if(osztasiMaradek(num1,num2)==-1)
    {
        printf("\nNem oszthato");
    }
    else
    {
        printf("\nA ket szam osztasi maradeka :%i",osztasiMaradek(num1,num2));
    }
    int oszto,osztando;
    scanf("%i%i",&osztando,&oszto);
    printf ("\nAz osztasi hanyados:%i",osztasi_hanyados(osztando,oszto));
    printf("\nHarom szam harmonikus kozepe: %lf",harmonikusKozep(number1,number2,number3));



    printf("A szamtani kozep: %lf",szamtaniKozep(number1,number2));


    return 0;

}
