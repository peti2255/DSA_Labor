//
// Created by petee on 02/03/2021.
//
#include <math.h>
#include "function.h"
int tavolsag(int a1,int a2, int b1, int b2)
{
    int d = sqrt((b1-a1)*(b1-a1)+(b2-a2)*(b2-a2));
    return d;
}
