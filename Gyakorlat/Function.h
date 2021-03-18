//
// Created by petee on 3/18/2021.
//

#ifndef GYAKORLAT_FUNCTION_H
#define GYAKORLAT_FUNCTION_H
#include <stdbool.h>
typedef struct
{
    int maxSize; // a verem maximális kapacitása
    int sp; //a verem teteje
    int *items; //elemeket tartalmazó tömb
} STACK;
/**
* kezdőértékadás, lefoglal
* és visszatéríti a verem címét
*/
STACK* create(int capacity);
/**
* felszabadítja a vermet
*/
 void destroy(STACK* myStack);
/**
* igaz, ha a veremben egyetlen
* elemet sem tárolunk
*/
/**
* igaz, ha a verembe már nem
* tehetünk újabb elemet, mert megtelt
*/
bool isFull(STACK* myStack);
/**
* egy elem betétele
* a verembe (a verem „tetejére”).
* Csak akkor lehetséges, ha a verem
* még nem telt meg
*/
void push(STACK* myStack, int item);
/**
* a verem „tetején”
* található elem kivétele a veremből.
* Csak akkor tudunk elemet kivenni,
* ha a verem nem üres
*/
void pop(STACK* myStack);
/**
* visszaadja a
* verem legfelső elemét
*/
int top(STACK* myStack);
/**
* kiírja a verem elemeit a
* verem struktúrának megfelelő sorrendben
*/
void printStack(STACK* myStack);
bool isEmpty(STACK* myStack);
#endif //GYAKORLAT_FUNCTION_H
