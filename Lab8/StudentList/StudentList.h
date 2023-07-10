#ifndef STUDENTLIST_H_INCLUDED
#define STUDENTLIST_H_INCLUDED

#include <stdio.h>
#include <stdbool.h>
//Student struktúra definiálása
typedef struct Student {
char* name;
char classroom;
int grade;
bool gender;
double* marks;
int numberOfMarks;
}Student;


//Student típus létrehozása
Student* Create(int maxNumberOfMarks);
//Student típus felszabadítása
void* Destroy(Student *student);
//Student kiiratása a képernyõre
void Print(Student* student);
//Student kiiratása állományba
void PrintToFile(FILE *file, Student* student);
//Adott Student jegyei átlagának kiszámítása
double AverageOfMarks(Student* student);


#endif // STUDENTLIST_H_INCLUDED
