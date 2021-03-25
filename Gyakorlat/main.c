#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Stack.h"
#include "Queue.h"

int main() {

    /**
     * Stack muveletek
     */
    NodeType* myStack = NULL;
    int option;
    bool repeat = true;
    while(repeat) {
        printf("\n\n********************************************\n\n");
        printf("Lehetseges muveletek:\n"
               "0. Kilepes\n"
               "1. Elem hozzaadasa a veremhez\n"
               "2. Verem kiiratasa\n"
               "3. Elem kivetele a verembol\n"
               "4. Urese a tomb\n"
               "5. Legfelso elem\n");
        printf("\n\n********************************************\n\n");
        printf("Valassz opciot: ");
        scanf("%i", &option);
        switch (option) {
            case 0:
                printf("Kilepes...");
                repeat = false;
                break;
            case 1: {
                ///push
                printf("Adj meg egy erteket: ");
                int item;
                scanf("%i", &item);
                push(&myStack,item);
                break;
            }
            case 2: {
                ///print stack
                printf("A verem tartalma: ");
                printStack(myStack);
                break;
            }
            case 3: {
                if(!isEmpty(myStack))
               pop(&myStack);
                else
                    printf("A verem ures");
                break;
            }
            case 4: {
                if(!isEmpty(myStack))
                    printf("A verem nem ures\n");
                else
                    printf("A verem ures\n");
                break;
            }
            case 5: {
                if (!isEmpty(myStack))
                printf("A legfelso elem: %i",top(myStack));
                else
                    printf("A verem ures");
                break;
            }
            default:
                printf("Ismeretlen opcio\n");
                break;
        }
    }


    /**
     * Queue muveletek
     */
    ListItem* first = NULL, *last = NULL;
    int option1;
    bool repeat1 = true;

   // while(repeat1) {
        printf("\n\n********************************************\n\n");
        printf("Lehetseges muveletek:\n"
               "0. Kilepes\n"
               "1. Elem hozzaadasa a sorhoz\n"
               "2. Sor kiiratasa\n"
               "3. Elem kivetele a sorbol\n"
               "4. Urese a sor\n"
               "5. Legfelso elem\n");
        printf("\n\n********************************************\n\n");
        printf("Valassz opciot: ");
        scanf("%i", &option);
        switch (option1) {
            case 0:
                printf("Kilepes...");
                repeat = false;
                break;
            case 1: {

            }
            case 2: {

            }
            case 3: {

            }
            case 4: {

            }
            case 5: {

            }
            default:
                printf("Ismeretlen opcio\n");
                break;
        }
    }
    return 0;
}
