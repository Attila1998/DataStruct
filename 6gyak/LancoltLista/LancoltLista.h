#ifndef LANCOLTLISTA_H_INCLUDED
#define LANCOLTLISTA_H_INCLUDED

typedef struct PELEM{
    int ata; //adatmező
    struct PELEM *next; //következő elem címe, ha nincs, akkor 0.
}PELEM;

//egy elemre vonatkozó függvények
PELEM* Create(int); //létrehoz egy elemet
void Destroy(PELEM*); //felszabadít egy elemet
//lista
PELEM* CreateL(); //return NULL;
void DestroyL(PELEM*); //felszabadítja a teljes listát
PELEM* insertLast(PELEM*, int); //beszúr a lista utolsó eleme után
PELEM* insertFirst(PELEM*, int); //beszúr a lista első eleme elé
PELEM* insertOrdered(PELEM*, int); //beszúr rendezetten egy feltételezhetően már rendezett listába
void Print(PELEM*); //kiírja a lista adat-mezőit
PELEM* SortL(PELEM*); //elrendezi a listaelemeket adatmező szerint növekvő sorrendbe
PELEM* Delete(PELEM*, int); //töröl adott értékű elemet a listából

#endif // LANCOLTLISTA_H_INCLUDED
