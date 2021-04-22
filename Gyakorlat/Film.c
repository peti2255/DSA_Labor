//
// Created by petee on 4/1/2021.
//

#include <stdlib.h>
#include <stdio.h>
#include "Film.h"

Film *creat()
{
    Film *film = (Film*)calloc(1,sizeof (Film));
    if(film == NULL)
    {
        printf("Sikertelen!");
        exit(1);
    }
    film->filmcim = (char *)malloc(32 * sizeof (char));
    if(film->filmcim == NULL)
    {
        printf("Sikertelen!");
        exit(1);
    }
    film->mufaj = (char *)malloc(15 * sizeof (char ));
    if(film->mufaj == NULL)
    {
        printf("Sikertelen!");
        exit(1);
    }
    film->idopontok = (double *)calloc(15,sizeof (double ));
    if(film->idopontok == NULL)
    {
        printf("Sikertelen!");
        exit(1);
    }
    return film;
}

void distroyFilm(Film *film) {
    free(film->filmcim);
    free(film->mufaj);
    free(film->idopontok);
    free(film);
}

void printFilm(Film *film) {

    printf("Film cim: %s\n",film->filmcim);
    printf("Mufaj: %s\n",film->mufaj);
    printf("Film hossza: %.2f\n",film->hossz);
    printf("Vetitesek szama: %i\n",film->vetitesek_szama);
    printf("Idopontok\n");
    for (int i = 0; i < film->vetitesek_szama; ++i) {
        printf("%i:  %.2f ",i,film->idopontok[i]);
    }


}

void fillFilm(Film *film) {

    printf("Film cim: ");
    scanf("%s",film->filmcim);
    printf("Mufaj: ");
    scanf("%s",film->mufaj);
    printf("Film hossza: ");
    scanf("%lf",&film->hossz);
    printf("Vetitesek szama: ");
    scanf("%i",&film->vetitesek_szama);
    printf("Idopontok:\n");
    for (int i = 0; i <film->vetitesek_szama; ++i) {
        printf("%i:",i);
        scanf("%lf",&film->idopontok[i]);
    }


}

void readFromFile(const char *filename, Film *film) {
    FILE * data;
    data = fopen(filename,"r");
    if(data == NULL) exit(1);
    int i=-1;
    while (data != EOF)
    {
        ++i;
        fscanf(data,"%s",film[i].filmcim);
        fscanf(data,"%s",film[i].mufaj);
        fscanf(data,"%lf",&film[i].hossz);
        fscanf(data,"%i",&film[i].vetitesek_szama);
    }
}