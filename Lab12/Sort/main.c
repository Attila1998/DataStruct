#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char* Array;
    int ArraySize = 10, rendezesekSzama = 10;
    srand(time(0));
    Array = CreateArray(ArraySize);
    FillWithRandomCharacters(Array,ArraySize);
    Print(Array,ArraySize);

    for(int rendezesId = 0; rendezesId < rendezesekSzama; ++rendezesId) {
    Sort(Array,ArraySize, rendezesId);
//ez rendezi a sz�msorozatot, �s ki�rja az eltelt id�t is
//a rendez�sId alapj�n d�nti el, hogy melyik rendez�st kell megh�vja
//ezt eg�sz�tsd ki �gy, hogy fusson a program sorra: 10, 100, 1000 ...
//elem� t�mb�kre
//a t�mb�t v�letlenszer�en t�ltsd fel 0 �s elemekSz�ma k�zti �rt�kekkel
    Print(Array, ArraySize);
}
    return 0;
}
