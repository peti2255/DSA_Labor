#include <stdio.h>
#include "Function.h"

int main() {
    int dimension,item = 5;
    printf("Dimension: ");
    scanf("%i",&dimension);
    STACK* Stack = create(dimension);
    printf("Teli vane a tomb? : ");
    if(isFull(Stack))
        printf("Teli van/ ures");
    else
        printf("Nincs teli");
    push(Stack,item);
    pop(Stack);
    if(top(Stack) > -1)
        printf("Az aktualis elem %i",top(Stack));
    else
        printf("A verem ures");
    printStack(Stack);

    destroy(Stack);
    return 0;
}
