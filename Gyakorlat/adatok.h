//
// Created by petee on 3/11/2021.
//

#ifndef GYAKORLAT_ADATOK_H
#define GYAKORLAT_ADATOK_H

typedef struct Employee {
    char* firstName; // -> ezt le kell foglalni;
    char lastName[20]; //char* lastName -> ezt le kell foglalni;
    int birthYear;

    int qualificationType; // 0-> nincs vegzetseg, 1-> kozepsuli, 2-> egyetem

    char* highSchool;
    float graduationAVG;

    char* university;
    char* department;
    float degreeAVG;

}Employee;

Employee* creatEmployee(int n);

void printEmployee(Employee* emp);
void readEmployee(Employee* emp,const char* fileName);


#endif //GYAKORLAT_ADATOK_H
