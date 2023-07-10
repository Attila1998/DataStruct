#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
typedef struct STACK{

    int size;

    char *elements;

    int sp; //stack pointer - veremmutat

}STACK;

STACK* create(int);
void Push(STACK*, char); //betesz a verem tetejere

char Pop(STACK*); //kiveszi a verembol a legfels elemet

char Top(STACK*); //megnezi a verem legfels elemt

int isEmpty(STACK*); //ellenrzi, hogyres-e a verem

int isFull(STACK*); //ellenrzi, hogy tele van-e a verem

void Destroy(STACK*); //felszabadit

void Print(STACK*); //kija a teljes verem tartalmt


#endif // STACK_H_INCLUDED
