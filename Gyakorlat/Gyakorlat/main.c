#include <stdio.h>
#include "Function.h"
#include <stdbool.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"hu_HU");
    int dimension,item;
    printf("Dimension: ");
    scanf("%i",&dimension);
    STACK* Stack = create(dimension);
    int repeat = true;
    while (repeat){
        printf("Lehetseges muveletek: \n"
                  "0. Kilepes\n"
                  "1. Ures-e a verem?\n"
                  "2. Tele van-e a verem\n"
                  "3. Elem betevese a verembe\n"
                  "4. Elem kivetele a verembol\n"
                  "5. Verem legfelso eleme\n"
                  "6. Verem kiiratasa\n");
        int option;
        printf("Valassz egy opciot :");
        scanf("%i",&option);
        switch (option) {
            case 0:
                printf("Kilepes...");
                repeat = false;
                break;
            case 1:
                if(isEmpty(Stack)>0)
                    printf("A verem nem ures\n");
                else
                    printf("A verem ures! \n");break;
            case 2:
                if (isFull(Stack) == true)
                    printf("A verem teli van\n");
                else
                    printf("A verem nincs teli\n");break;
            case 3:
                printf("Elem: ");
                scanf("%i", &item);
                push(Stack,item);break;
            case 4:
                pop(Stack);
               printf("A verem legfelso eleme kiveve\n"); break;
            case 5:
                printf("A verem fegfelso elem: %i\n",top(Stack));break;
            case 6:
                printf("A verem :");
                printStack(Stack);break;
        }
    }
    return 0;
}
