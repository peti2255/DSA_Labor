//
// Created by petee on 3/11/2021.
//

#include "adatok.h"
#include <stdlib.h>
#include <stdio.h>

Employee *creatEmployee(int n) {
    Employee* emp = (Employee*)malloc(sizeof(Employee)) ;
    if(emp == NULL)
    {
        printf("Sikertelen helyfoglalas");
        exit(1);
    }

    // lefoglalasok
    emp->firstName = (char *)malloc(n * sizeof (char));
    // ellenorzes
    if(emp->firstName == NULL)
    {
        printf("Sikertelen helyfoglalas");
        exit(1);
    }
    emp->highSchool =(char *)malloc(n * sizeof (char));
    if(emp->highSchool == NULL)
    {
        printf("Sikertelen helyfoglalas");
        exit(1);
    }
    emp->university =(char *)malloc(n * sizeof (char));
    if(emp->university == NULL)
    {
        printf("Sikertelen helyfoglalas");
        exit(1);
    }
    emp->department =(char *)malloc(n * sizeof (char));
    if(emp->department == NULL)
    {
        printf("Sikertelen helyfoglalas");
        exit(1);
    }

    return emp;
}

void printEmployee(Employee *emp) {
    printf("Name: %s %s\n",emp->firstName,emp->lastName);
    printf("Birth Day: %i \n",emp->birthYear);
    if(emp->qualificationType != 0)
    {
        printf("High School: %s \n",emp->highSchool);
        printf("High School Graduated: %.2f \n",emp->graduationAVG);
        if(emp->qualificationType ==2)
        {
            printf("University: %s \n",emp->university);
            printf("University department: %s \n",emp->department);
            printf("Universty Graduated: %.2f \n",emp->degreeAVG);
        }
    }



}

void readEmployee(Employee *emp, const char *fileName) {
    FILE * input = fopen(fileName, "r");
    // ellenorzes
    if(fileName == NULL)
    {
        printf("Sikeretelen allomany megnyitas");
        exit(1);
    }

    fscanf(input, "%[^\n]\n", emp->firstName);
    fscanf(input, "%[^\n]\n", emp->lastName);
    fscanf(input, "%i ", &emp->birthYear);
    fscanf(input, "%i ", &emp->qualificationType);
    //0 , 1, 2
    if(emp->qualificationType != 0)
    {
        // olyan alkalmazott akinek van valamilyen vegzettsege
        fscanf(input, "%[^\n]\n", emp->highSchool);
        fscanf(input, "%f ", &emp->graduationAVG);

        if (emp->qualificationType == 2)
        {
            fscanf(input, "%[^\n]\n", emp->university);
            fscanf(input, "%[^\n]\n", emp->department);
            fscanf(input, "%f ", &emp->degreeAVG);
        }
    }


    fclose(input);
}
