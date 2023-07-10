#ifndef 2LANCOLTLISTA_H_INCLUDED
#define 2LANCOLTLISTA_H_INCLUDED

typedef struct PELEM2{
    int data; //adatmező
    struct PELEM2 *prev, *next; //előző és következő elem címe, ha nincs, akkor 0.
}PELEM2;

//egy elemre vonatkozó függvények
PELEM2* Create(int); //létrehoz egy elemet
void Destroy(PELEM2*); //felszabadít egy elemet
//lista
PELEM2* CreateL(); //return NULL;
void DestroyL(PELEM2*); //felszabadítja a teljes listát
PELEM2* insertLast(PELEM2*, int); //beszúr a lista utolsó eleme után
PELEM2* insertFirst(PELEM2*, int); //beszúr a lista első eleme elé
PELEM2* insertOrdered(PELEM2*, int); //beszúr rendezetten egy feltételezhetően már rendezett listába
void Print(PELEM2*); //kiírja a lista adat-mezőit
PELEM2* SortL(PELEM2*); //elrendezi a listaelemeket adatmező szerint növekvő sorrendbe
PELEM2* Delete(PELEM2*, int); //töröl adott értékű elemet a listából

#endif // 2LANCOLTLISTA_H_INCLUDED
