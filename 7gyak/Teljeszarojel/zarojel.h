#ifndef ZAROJEL_H_INCLUDED
#define ZAROJEL_H_INCLUDED

typedef struct STACK{
    int size;
    char *elements;
    int sp; //stack pointer - veremmutató
}STACK;

STACK* Create(int n);
void Push(STACK* S, char a );
char Pop(STACK* S);
void Print(STACK* S);
void CreateFILE(const char* IN, char** pT, int* pN);
#endif // ZAROJEL_H_INCLUDED
