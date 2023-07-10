typedef struct Polinom
{
    int fok;
    int *egyutthato;

    int size;

} Polinom;



Polinom* Create(int n) // - nullpolinomot létrehoz, max paraméter tag
{
    Polinom* P=(Polinom*)malloc(1,sizeof(Polinom));
    P->fok=0;
    P->size=n+1;
    P->eggyutthato=(int*)malloc(P->size,sizeof(int));
    return P;
}

void Destroy(Polinom* P)
{
    free(P->egyutthatok);
    free(P->fok);
    free(P->size);
    free(P);
}

int PutEgyutthato(Polinom* P, int fk int c) //- ellenőrizni kell, hogy belefér-e, fokszámot át kell állítani, ha kell
{
    P->egyutthatok[fokszam]=elem;
    return a;
}

int GetEgyutthato(Polinom* P, int n) //- adott fokszámú tag együtthatójának lekérdezése
{

    return P->egyutthatok[fokszam];
}

int NullPolinom(Polinom* P) //- ellenőrzés
{
    if(a->size==0)
    {
        return 1;
    }
    return 0;
}

void Print(Polinom* P) //- "szép" kiírás
{
    for(int i=0; i<=size; i++)
    {
        for(int i=P->size; i>=0; --i)
        {
            printf("%ix^%i + ", P->egyutthatok[i],i);
        }
        printf("\n");
    }
}

Polinom* Osszead(Polinom* P, Polinom* P2)
{
    Polinom*osszeg;
    if(P->size < P2->size)
    {
        osszeg=Create(P2->size);
    }
    else
    {
        osszeg=Create(P->size);
    }
    for(int i=0; i<=osszeg->size; ++i)
    {
        PutEgyutthato(osszeg,i,GetEgyutthato(P,i)+GetEgyutthato(P2,i));
    }
    return osszeg;
}

Polinom* Szoroz(Polinom* P, Polinom* P2)
{
    Polinom * szorzat;
    szorzat=Create(P->size + P2->size - 1);
    for(int i=0; i<P->size; ++i)
    {
        for(int j=0; j<P2->size; ++j)
        {
            PutEgyutthato(szorzat,i+j,GetEgyutthato(szorzat,i+j)+GetEgyutthato(P,i)*GetEgyutthato(P2,j));
        }
    }
    return szorzat;
}

Polinom** Oszt(Polinom* P, Polinom* P2) //- tételezzük fel, hogy az első nagyobb, mint a másodi; az eredmény egy Polinom* elemeket tartalmazó kételemű tömb, aminek a 0. eleme a hányados-polinom, az 1. eleme a maradék-polinom.
{
    Polinom * osztas;
    osztas=Create(P->size + P2->size - 1);
    for(int i=0; i<P->size; ++i)
    {
        for(int j=0; j<P2->size; ++j)
        {
            PutEgyutthato(osztas,i-j,GetEgyutthato(osztas,i-j)+(GetEgyutthato(P,i))/(GetEgyutthato(P2,j)));
        }
    }
    return osztas;
}

}

int PolinomErteke(Polinom* P, int n) //- behelyettesítési érték
{
    int megoldas=0,x=1;
    for(int i=0; i<P->size; ++i)
    {
        megoldas=megoldas+GetEgyutthato(P,i)*x;
        x=x*n;
    }
    return megoldas;
}
