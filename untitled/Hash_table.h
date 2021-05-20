//
// Created by petee on 5/20/2021.
//

#ifndef UNTITLED_HASH_TABLE_H
#define UNTITLED_HASH_TABLE_H

typedef struct Hash
{
    char *szo;
    char *word;
}Hash;

Hash ** create(int capacity);
void insert(char *english,char *hungarian,Hash**T, int m);
void printHashTable(Hash** t, int m);
int search(Hash**T, int m, char s[20]);
int searcHungaryan(Hash**T, int m, char s[20]);

#endif //UNTITLED_HASH_TABLE_H
