#ifndef STUDENTLIST2_H_INCLUDED
#define STUDENTLIST2_H_INCLUDED

typedef struct PELEM{
    Stundet* student; //adatmez�
    struct PELEM *next; //k�vetkez� elem c�me, ha nincs, akkor 0.
}PELEM;

//egy elemre vonatkoz� f�ggv�nyek
PELEM* Create(Stundet*); //l�trehoz egy elemet
void Destroy(PELEM*); //felszabad�t egy elemet
//lista
PELEM* CreateL(); //return NULL;
void DestroyL(PELEM*); //felszabad�tja a teljes list�t
PELEM* insertLast(PELEM*, Stundet*); //besz�r a lista utols� eleme ut�n
PELEM* insertFirst(PELEM*, Stundet*); //besz�r a lista els� eleme el�
PELEM* insertOrdered(PELEM*, Stundet*); //besz�r rendezetten egy felt�telezhet�en m�r rendezett list�ba
void Print(PELEM*); //ki�rja a lista adat-mez�it
PELEM* SortL(PELEM*); //elrendezi a listaelemeket adatmez� szerint n�vekv� sorrendbe
PELEM* Delete(PELEM*, Stundet*); //t�r�l adott �rt�k� elemet a list�b�l

#endif // STUDENTLIST2_H_INCLUDED
