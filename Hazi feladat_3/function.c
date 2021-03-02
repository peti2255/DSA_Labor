//
// Created by petee on 02/03/2021.
//

#include "function.h"
#include <math.h>
#include <stdio.h>
int delta(int a,int b,int c)
{
    int del = b*b-4*a*c;
    return del;
}
void megoldas(int a,int b, int delta)
{
    if(delta > 0)
    {
        int x1=(-b+sqrt(delta))/(2*a);
        int x2=(-b-sqrt(delta))/(2*a);
        printf("X1: %i\n",x1);
        printf("X2: %i\n",x2);
    }
    if(delta == 0)
    {
        int x3=(-b+sqrt(delta))/(2*a);
        printf("X: %i",x3);
    }
    if(delta < 0)
    {
        printf("Nincs valos megoldas");
    }

}