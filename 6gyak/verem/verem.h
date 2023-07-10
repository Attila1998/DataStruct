#ifndef VEREM_H_INCLUDED
#define VEREM_H_INCLUDED

typedef struct STACK{
    int size;
    char *elements;
    int sp; //stack pointer - veremmutató
}STACK;

STACK* Create(int); //létrehoz egy vermet-
void Push(STACK*, char); //betesz a verem tetejére-
char Pop(STACK*); //kiveszi a veremből a legfelső elemet-
char Top(STACK*); //megnézi a verem legfelső elemét-
int isEmpty(STACK*); //ellenőrzi, hogy üres-e a verem-
int isFull(STACK*); //ellenőrzi, hogy tele van-e a verem-
void Destroy(STACK*); //felszabadít-
void Print(STACK*); //kiírja a teljes verem tartalmát (segédfüggvény, nem tartozik az adatszerkezet definíciójához)-

#endif // VEREM_H_INCLUDED
