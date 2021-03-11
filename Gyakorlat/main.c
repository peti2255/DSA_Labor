#include <stdio.h>
#include <stdlib.h>
#include "adatok.h"

int main() {
    int n = 20;
    Employee* emp = creatEmployee(n);
    readEmployee(emp, "one_employee.txt");
    printEmployee(emp);



    return 0;
}
