#ifndef CLASSROOM_H_INCLUDED
#define CLASSROOM_H_INCLUDED

#include<stdlib.h>
#include "Student.h"

//ClassRoom strukt�ra defini�l�sa
typedef struct ClassRoom {
Student** osztaly;
int numberOfStudents;
}ClassRoom;


//ClassRoom t�pus l�trehoz�sa
ClassRoom* CreateClass(int numberOfStudents);
//ClassRoom adatainak beolvas�sa
ClassRoom* ReadStudentsData(const char* fileName);
//ClassRoom adatainak kiirat�sa a k�perny�re
void PrintClass(ClassRoom* classRoom);
//ClassRoom t�pus felszabad�t�sa
void DestroyClass(ClassRoom* classRoom);
//ClassRoom adatainak kiirat�sa �llom�nyba
void PrintClassToFile(const char* fileName, ClassRoom* classRoom);
//Adott ClassRoom - ban tal�lhat� di�kok �tlag�nak kisz�m�t�sa (oszt�ly�tlag)
double AverageOfClass(ClassRoom* classRoom);
//Nemek eloszl�sa (kik vannak t�bben)
void GenderProportion(ClassRoom* classRoom);
//Egy adott n�vvel rendelkez� di�k adatainak kiirat�sa
void DetailsOfSpecificStudent(ClassRoom* classRoom, char* name);
//ClassRoom tanul�inak n�vsor szerinti rendez�se
void SortClassByName(ClassRoom* classRoom);
//ClassRoom tanul�inak �vfolyam �s azon bel�l n�vsor szerinti rendez�se
void SortClassByGradeAndName(ClassRoom* classRoom);

#endif // CLASSROOM_H_INCLUDED
