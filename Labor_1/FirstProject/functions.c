//
// Created by User on 2/18/2021.
//

#include "functions.h"
int osszeg(int a, int b)
{
    return a+b;
}
int max(int a1,int b1,int c1)
{
    int max=a1;
    if(max<b1){
        max=b1;
    }
    if(max<c1)
    {
        max=c1;
    }
    return max;

}
int min(a1,b1,c1)
{
    int min=a1;
    if(min>b1){
        min=b1;
    }
    if(min>c1)
    {
        min=c1;
    }
    return  min;
}
void beolvas(int* array,int n)
{
    for (int i = 0; i < n; ++i) {
        printf("%i-ik elem:",i);
        scanf("%i",&array[i]);
    }
}
void kiir(int* array,int n)
{
    for (int i = 0; i < n; ++i) {
        printf("%i ",array[i]);
    }
}
int tosszeg(int* array,int n){

}
int tszorzat(int* array,int n){

}
int tatlag(int* array,int n){

}
#include "function.h"
#include <math.h>

int osszeg(int a, int b)
{
    return a+b;
}

int szorzat(int num1, int num2)
{
    return num1*num2;
}
double atlag(double num1, double num2, double num3){
    double sum = 0;
    sum = num1+num2+num3;
    return (double)sum/3;
}
double mertanikozep(double num1, double num2){
    return (double) sqrt(num1*num2);
}
int osztasiMaradek(int osztando,int oszto)
{
    if(oszto==0)
    {
        return  -1;
    }
    return osztando%oszto;
}
double harmonikusKozep(double num1, double num2, double num3){
    double kozep=3/((1/num1)+(1/num2)+(1/num3));
    return kozep;
}
double szamtaniKozep(double num1, double num2){
    return (num1+num2)/2;
}

int osztasi_hanyados(int osztando,int oszto) {
    if (oszto == 0) {
        return -1;
    } else {
        return osztando/oszto;
    }
}