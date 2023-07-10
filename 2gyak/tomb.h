#ifndef TOMB_H_INCLUDED
#define TOMB_H_INCLUDED

typedef struct IntArrey
{
    int size;
    int* elements;
} IntArrey;


IntArrey* Create(int n);
void Destroy(IntArrey* A);

int Put(IntArrey* A,int x,int b);
int Get(IntArrey* A, int c);//lekerdezes
int Lenght(IntArrey* A);
void Print(IntArrey* A);

#endif // TOMB_H_INCLUDED
