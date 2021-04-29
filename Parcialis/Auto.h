//
// Created by petee on 4/29/2021.
//

#ifndef PARCIALIS_AUTO_H
#define PARCIALIS_AUTO_H
typedef struct Auto{
        char rendszam[11];
        double motor;
        char marka[16];
        int megtettkilometer;
        int evjarat;
        int javitasokszama;
        int* javitasok;
}Auto;

Auto* creat();

void destroy(Auto* newAuto);

Auto* readFile(const char* file);

void print(Auto* newAuto);
void javitfeltolt(Auto* newauto);
void legtobbjavitas(Auto* newauto);
#endif //PARCIALIS_AUTO_H
