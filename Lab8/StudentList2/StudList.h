#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <stdio.h>
#include <stdbool.h>
//Student struktúra definiálása
typedef struct Student {
char* name;
char classroom;
int grade;
bool gender;
double* marks;
int age;
int numberOfMarks;
}Student;


//Student típus létrehozása
Student* CreateStudent(FILE* fil,int numberOfMarks);
//Student típus felszabadítása
void DestroyStudent(Student *student);
//Student kiiratása a képernyõre
void Print(Student* student);
//Student kiiratása állományba
void PrintToFile(FILE *file, Student* student);

void FillMarks(Student* student);
bool IsPassed(Student* student);
double AverageOfMarks(Student* student)

#endif // STUDENT_H_INCLUDED
