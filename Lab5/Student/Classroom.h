#ifndef CLASSROOM_H_INCLUDED
#define CLASSROOM_H_INCLUDED

#include<stdlib.h>
#include "Student.h"

//ClassRoom struktúra definiálása
typedef struct ClassRoom {
Student** osztaly;
int numberOfStudents;
}ClassRoom;


//ClassRoom típus létrehozása
ClassRoom* CreateClass(int numberOfStudents);
//ClassRoom adatainak beolvasása
ClassRoom* ReadStudentsData(const char* fileName);
//ClassRoom adatainak kiiratása a képernyõre
void PrintClass(ClassRoom* classRoom);
//ClassRoom típus felszabadítása
void DestroyClass(ClassRoom* classRoom);
//ClassRoom adatainak kiiratása állományba
void PrintClassToFile(const char* fileName, ClassRoom* classRoom);
//Adott ClassRoom - ban található diákok átlagának kiszámítása (osztályátlag)
double AverageOfClass(ClassRoom* classRoom);
//Nemek eloszlása (kik vannak többen)
void GenderProportion(ClassRoom* classRoom);
//Egy adott névvel rendelkezõ diák adatainak kiiratása
void DetailsOfSpecificStudent(ClassRoom* classRoom, char* name);
//ClassRoom tanulóinak névsor szerinti rendezése
void SortClassByName(ClassRoom* classRoom);
//ClassRoom tanulóinak évfolyam és azon belül névsor szerinti rendezése
void SortClassByGradeAndName(ClassRoom* classRoom);

#endif // CLASSROOM_H_INCLUDED
