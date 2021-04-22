//
// Created by petee on 4/22/2021.
//

#ifndef GYAKORLAT_FUNCTION_H
#define GYAKORLAT_FUNCTION_H


/**
* a bináris keresőfa egy csomópontját leíró struktúra
* data -> adat (információ)
* left -> bal ágra mutató cím
* right -> jobb ágra mutató cím
*/
typedef struct root
{
    int data;
    struct root *left;
    struct root *right;
}root;
/**
* Létrehoz egy csomópontot egy adott értékkel
* @param data az információ, amivel a csomópontnak rendlekeznie kell
* @return egy cím, amely a lefoglalt csomópontra mutat
*/
root *create(int data);
/**
* Felszabadítja a teljes bináris fát, kiindulva a gyökértől
* @param tree a bináris fa gyökerének címét kapja meg
*/
void destroy(root ** tree);
/**
* Beszúr egy új elemet a keresőfába a megfelelő helyre
* Ez a függvény meg kell hívja a create függvényt
* Vigyázat! Megváltozhat a fa gyökere!
* @param tree a fa gyökerére mutató cím
* @param data az információ, amellyel az új csomópontnak rendelkeznie kell
*/
root* insert(root *tree, int data);
/**
* Bejárja a fát inorder sorrend szerint (bal - gyökér - jobb)
* Ha helyesen dolgoztál, bináris keresőfa esetén ez növekvő sorrendben kell
kiírja a csomópontokat
* @param tree a fa gyökerére mutató cím
*/
void inorder(root *tree);
/**
* Bejárja a fát preorder sorrend szerint (gyökér - bal - jobb)
* @param tree a fa gyökerére mutató cím
*/
void preorder(root *tree);
/**
* Bejárja a fát preorder sorrend szerint (bal - jobb - gyökér)
* @param tree a fa gyökerére mutató cím
*/
void postorder(root *tree);
/**
* Töröl egy adott elemet a fából
* Vigyázat, megváltozhat a fa gyökere!
* Ha nincs ilyen csomópont, írj ki ennek megfelelő üzenetet
* Használj segédfüggvényt, ha szükséges
* @param tree a fa gyökerére mutató cím
* @param data információ amelyikkel rendelkező csomópontot törölni kell
*/
root* delete(root *tree, int data);
/**
*
* @param tree a fa gyökerére mutató cím
* @param data információ emellyel rendelkező csomópontot keressük
* @return a megtalált csomópont címe, ha nincs ilyen csomópont akkor téríts
vissza null-t
*/
root *find(root *tree, int data);
int findMinforN(root* root, int N);
int findMaxforN(root* root, int N);
#endif //GYAKORLAT_FUNCTION_H
