#ifndef TOMB_H_INCLUDED
#define TOMB_H_INCLUDED

void Letrehozas (int **px, int n);//-calloc
void Letrehozas2 (int **px, int n);//-malloc
//int Feltöltés - void (const char *, int**, int*)// - állományból
void Feltoltes   (int *x, int n, int a, int b); //- véletlenszámokkal
void Kiiras(int *x, int n);
// void Kiírás  - void (const char*, int*, int) //- állományba
int Rendezes  (int*x, int n);// - tetszőleges algoritmussal
void Kereses  (int*x, int n, int c); //- pozíciót térít vissza - lineáris/bináris
int Binariskereses(int *a, int n, int c)//bin kereses
void Torles  (int*, int*, int); //- értéket töröl, csökkenti a tömb hosszát
int Minimum  (int*x, int n);
int Maximum  (int*x, int n);
int Masolas  (int*, int, int*, int);

#endif // TOMB_H_INCLUDED
