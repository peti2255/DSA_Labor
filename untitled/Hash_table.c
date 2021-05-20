//
// Created by petee on 5/20/2021.
//
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "Hash_table.h"

Hash **create(int m) {
    Hash **t;
    t = (Hash **) (malloc(m * sizeof(Hash *)));
    for (int i = 0; i < m; i++) {
        t[i] = (Hash *) malloc(sizeof(Hash));
        t[i]->word = (char *) (calloc(20, sizeof(char)));
        t[i]->szo = (char *) (calloc(20, sizeof(char)));
        strcpy(t[i]->szo, "");
        strcpy(t[i]->word, "");
    }
    return t;
}

void insert(char *english, char *hungarian, Hash **T, int m) {
    int j, i = 0;
    int sz;
    sz = strlen(english);
    do {
        j = (sz + i) % m;
        if (strcmp(T[j]->word, "") == 0) {
            strcpy(T[j]->word, english);
            strcpy(T[j]->szo, hungarian);
            return;
        } else i++;
    } while (i != m);
    printf("tulcsodulas");
}

void printHashTable(Hash **t, int m) {
    if (t != NULL) {
        for (int i = 0; i < m; ++i) {
            if (strcmp(t[i]->word, "") != 0){
                printf("%d) %s = %s\n", i, t[i]->word, t[i]->szo);
            }
        }
    }
}
int search(Hash**T, int m, char s[20]) {
    int j, i = 0;
    int sz;
    int k=strlen(s);
    do {
        j = (k + i) % m;
        if(strcmp(T[j]->word,s)==0)
            return j;
        else i++;
    } while (strcmp(T[j]->word,"")!=0 && (i != m));
    return -1;
}
int searcHungaryan(Hash**T, int m, char s[20]){
    int j, i = 0;
    int sz;
    int k=strlen(s);
    do {
        j = (k + i) % m;
        if(strcmp(T[j]->szo,s)==0)
            return j;
        else i++;
    } while (strcmp(T[j]->szo,"")!=0 && (i != m));
    return -1;
}

