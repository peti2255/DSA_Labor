#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Hash_table.h"

int main() {

    Hash **table = NULL;
    int capacity = 100;
    table = create(capacity);
    FILE *input = freopen("szotar.txt", "r", stdin);
    if (!input) {
        printf("HIBA");
        exit(1);
    }
    char english[20];
    char hungarian[20];
    while (scanf("%s%s", english, hungarian) != -1) {

        insert(english, hungarian, table, capacity);


    }
    printHashTable(table, capacity);

    freopen("CON", "r", stdin);
    printf("\n\n");

    int option;
    bool repeat = true;
    while (repeat) {
        printf("0.Kilepes\n"
               "1. Angol szo megadasa\n"
               "2. Magyar szo megadasa\n");

        printf("Valassz opciot: ");
        scanf("%i", &option);
        switch (option) {
            case 0:
                printf("Kilepes...");
                repeat = false;
                break;
            case 1: {
                char worldToTranslateEng[20];
                printf("Adj meg egy szot:");
                scanf("%s", worldToTranslateEng);
                int index = search(table, 100, worldToTranslateEng);
                if (index == -1) {
                    printf("A keresett szo nem talalhato\n");
                } else {
                    printf("%d) %s = %s", index, table[index]->word, table[index]->szo);
                }
            }
                break;
            case 2: {
                char worldToTranslateHun[20];
                printf("Adj meg egy szot:");
                scanf("%s", worldToTranslateHun);
                int index = searcHungaryan(table, 100, worldToTranslateHun);
                if (index == -1) {
                    printf("A keresett szo nem talalhato\n");
                } else {
                    printf("%d) %s = %s", index, table[index]->word, table[index]->szo);
                }
            }
                break;
            default:
                printf("Helytelen opcio. Probald ujra! ");
                break;
        }

    }
    return 0;
}
