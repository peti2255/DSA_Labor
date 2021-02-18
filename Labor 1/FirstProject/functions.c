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