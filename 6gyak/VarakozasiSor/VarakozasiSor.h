#ifndef VARAKOZASISOR_H_INCLUDED
#define VARAKOZASISOR_H_INCLUDED


typedef struct VSOR{
    PELEM* listafej;
    PELEM* listaveg;    ///opcionális
}
VSOR* Create(); //létrehoz egy várakozási sort
void Destroy(VSOR*);   //felszabadít egy várakozási sort
void Push(VSOR*,int);  //betesz a várakozási sor egyik végére
int Pop(VSOR*);   //kiveszi a következő elemet
int Top(VSOR*);   //megnézi, hogy ki a következő elem a sorban
void Print(VSOR*);   //kiírja a teljes várakozási sor tartalmát

int isEmpty(VSOR*); //ellenőrzi, hogy üres-e a sor


int isFull(VSOR*); //ellenőrzi, hogy tele van-e a sor

#endif // VARAKOZASISOR_H_INCLUDED
