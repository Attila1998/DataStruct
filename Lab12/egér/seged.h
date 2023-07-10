#ifndef SEGED_H_INCLUDED
#define SEGED_H_INCLUDED
typedef struct LAB
{
    int n,m;
    int**labirintus;
    int ex,ey;
    int sx,sy;
}LAB;
typedef struct LAB1D
{
    int n,m;
    int *labirintus;
    int ex;
    int sx;
}LAB1D;
LAB*Create(const char*);
void Destroy(LAB*);
void Print(LAB*);
void MOVE(LAB*,char);   //switch, getch()
int Solve(LAB*);

LAB1D*Create1D(const char*);
void Destroy1D(LAB1D*);
void Print1D(LAB1D*);
void MOVE1D(LAB1D*,char);   //switch, getch()
int Solve1D(LAB1D*);

#endif // SEGED_H_INCLUDED
