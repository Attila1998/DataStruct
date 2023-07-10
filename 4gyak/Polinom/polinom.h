#ifndef POLINOM_H_INCLUDED
#define POLINOM_H_INCLUDED

typedef struct Polinom
{
    int fok;
    int *egyutthatok;

    int size;

} Polinom;


Polinom* Create(int n) // - nullpolinomot létrehoz, max paraméter tag
void Destroy(Polinom* P)
int PutEgyutthato(Polinom* P, int n, int c) //- ellenőrizni kell, hogy belefér-e, fokszámot át kell állítani, ha kell
int GetEgyutthato(Polinom* P, int n) //- adott fokszámú tag együtthatójának lekérdezése
int NullPolinom(Polinom* P) //- ellenőrzés
void Print(Polinom* P) //- "szép" kiírás
Polinom* Osszead(Polinom* P, Polinom* P)
Polinom* Szoroz(Polinom* P, Polinom* P)
Polinom** Oszt(Polinom* P, Polinom* P) //- tételezzük fel, hogy az első nagyobb, mint a másodi; az eredmény egy Polinom* elemeket tartalmazó kételemű tömb, aminek a 0. eleme a hányados-polinom, az 1. eleme a maradék-polinom.
int PolinomErteke(Polinom* P, int n) //- behelyettesítési érték

#endif // POLINOM_H_INCLUDED
