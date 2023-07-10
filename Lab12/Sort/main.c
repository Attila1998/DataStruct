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
//ez rendezi a számsorozatot, és kiírja az eltelt idõt is
//a rendezésId alapján dönti el, hogy melyik rendezést kell meghívja
//ezt egészítsd ki úgy, hogy fusson a program sorra: 10, 100, 1000 ...
//elemû tömbökre
//a tömböt véletlenszerûen töltsd fel 0 és elemekSzáma közti értékekkel
    Print(Array, ArraySize);
}
    return 0;
}
