//
// Created by petee on 4/1/2021.
//

#ifndef GYAKORLAT_FILM_H
#define GYAKORLAT_FILM_H

typedef struct Film
{
    char *filmcim;
    char *mufaj;
    double hossz;
    int vetitesek_szama;
    double *idopontok;
}Film;

Film * creat();
void distroyFilm (Film* film);
void readFromFile(const char *filename,Film *film);
void printFilm(Film * film);
void fillFilm(Film * film);

#endif //GYAKORLAT_FILM_H
