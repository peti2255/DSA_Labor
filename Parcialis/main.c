#include <stdio.h>
#include "Auto.h"
#include <time.h>
#include <aclui.h>
#include "AutoVerem.h"

int main() {
    srand(time(0));
   Auto* newauto;

   newauto = readFile("auto.txt");
   javitfeltolt(newauto);
   print(newauto);
   legtobbjavitas(newauto);
   Node * node = create();
   push(&node,newauto);
   printf("\n\n\n");
   traverse(node);
   printf("\n\n");
   print(top(node));
  // printf("%s",top(node)->rendszam);
    printf("\n\n");
    print(pop(&node));
    printf("\n\n");
    print(top(node));

    return 0;
}
