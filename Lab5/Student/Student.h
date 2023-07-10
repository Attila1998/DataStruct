#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <stdio.h>
#include <stdbool.h>
//Student strukt�ra defini�l�sa
typedef struct Student {
char* name;
char classroom;
int grade;
bool gender;
double* marks;
int numberOfMarks;
}Student;


//Student t�pus l�trehoz�sa
Student* Create(int maxNumberOfMarks);
//Student t�pus felszabad�t�sa
void* Destroy(Student *student);
//Student kiirat�sa a k�perny�re
void Print(Student* student);
//Student kiirat�sa �llom�nyba
void PrintToFile(FILE *file, Student* student);
//Adott Student jegyei �tlag�nak kisz�m�t�sa
double AverageOfMarks(Student* student);


int cmpByName(const void* s1,const void* s2)
int cmpByGradeAndName(const void* s1,const void* s2)

#endif // STUDENT_H_INCLUDED
