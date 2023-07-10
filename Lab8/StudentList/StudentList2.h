#ifndef STUDENTLIST2_H_INCLUDED
#define STUDENTLIST2_H_INCLUDED

typedef struct PELEM{
    Stundet* student; //adatmezõ
    struct PELEM *next; //következõ elem címe, ha nincs, akkor 0.
}PELEM;

//egy elemre vonatkozó függvények
PELEM* Create(Stundet*); //létrehoz egy elemet
void Destroy(PELEM*); //felszabadít egy elemet
//lista
PELEM* CreateL(); //return NULL;
void DestroyL(PELEM*); //felszabadítja a teljes listát
PELEM* insertLast(PELEM*, Stundet*); //beszúr a lista utolsó eleme után
PELEM* insertFirst(PELEM*, Stundet*); //beszúr a lista elsõ eleme elé
PELEM* insertOrdered(PELEM*, Stundet*); //beszúr rendezetten egy feltételezhetõen már rendezett listába
void Print(PELEM*); //kiírja a lista adat-mezõit
PELEM* SortL(PELEM*); //elrendezi a listaelemeket adatmezõ szerint növekvõ sorrendbe
PELEM* Delete(PELEM*, Stundet*); //töröl adott értékû elemet a listából

#endif // STUDENTLIST2_H_INCLUDED
