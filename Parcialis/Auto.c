//
// Created by petee on 4/29/2021.
//

#include "Auto.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

Auto *creat() {
    Auto * newAuto = (Auto*)malloc(sizeof(Auto));
    if(!newAuto)
    {
        printf("Sikertelen");
        exit(1);
    }
    int* javitas = (int*)malloc(sizeof (int));
    if(!javitas)
    {
        printf("Sikertelen");
        exit(1);
    }
    strcpy(newAuto->rendszam,"");
    strcpy(newAuto->marka,"");
    newAuto->motor = 0;
    newAuto->megtettkilometer = 0;
    newAuto->evjarat = 0;

    return newAuto;
}

void destroy(Auto* newAuto)
{
    free(&newAuto->evjarat);
    free(newAuto);
}

Auto *readFile(const char *file) {
    FILE *input = fopen(file, "r");
    if (!input) {
        printf("Sikertelen");
        exit(1);

    }
    int n;
    fscanf(input, "%i\n", &n);
    Auto *auto1= (Auto *)calloc(n,sizeof(Auto));
    for (int i = 0; i < n; ++i) {
        auto1[i] = *creat();
        fscanf(input, "%s\n", auto1[i].rendszam);
        fscanf(input, "%lf\n", &auto1[i].motor);
        fscanf(input, "%s\n", auto1[i].marka);
        fscanf(input, "%i\n", &auto1[i].megtettkilometer);
        fscanf(input, "%i\n", &auto1[i].evjarat);
        fscanf(input, "%i ", &auto1[i].javitasokszama);
//        for (int j = 0; j < auto1[i].javitasokszama; ++j) {
//            fscanf(input,"%i ", &auto1[i].javitasok[j]);
//        }
    }
    fclose(input);
    return auto1;
}

void print(Auto *newAuto) {
    printf("Rendszam: %s\n",newAuto->rendszam);
    printf("Marka: %s\n",newAuto->marka);
    printf("Motor :%lf\n",newAuto->motor);
    printf("Megtettkilometer: %i\n",newAuto->megtettkilometer);
    printf("Javitasok: ");
    for (int i = 0; i < newAuto->javitasokszama; ++i) {
        printf("%i ",newAuto->javitasok[i]);
    }
}

void javitfeltolt(Auto *newauto) {
     newauto->javitasok = (int*)malloc(newauto->javitasokszama*sizeof (int));
    if(!newauto->javitasok)
    {
        printf("Sikertelen");
        exit(1);
    }
    for (int i = 0; i < newauto->javitasokszama; ++i) {
        newauto->javitasok[i] = rand()%  (2020 - newauto->evjarat + 1) + newauto->evjarat;
    }
}

void legtobbjavitas(Auto *newauto) {
    int tmp,ossz;
    tmp = newauto->javitasok[0];
    for (int i = 1; i < newauto->javitasokszama; ++i) {
        if(newauto->javitasok[i] == tmp)
        {
            ossz ++;
        }
    }
    if(ossz == 0)
    {
        printf("\n nem volt");
    }else
    {
        printf("\nA legtobb javitas a %i evben volt",ossz);
    }

}
