#include <stdio.h>
#include <stdlib.h>
#include "tomb.h"
/*Létrehozás- 0as tele/semmi            (int** ; int)
Feltöltés(állomány)/véletlen számok     (const char* ; int* ; int)/(int* ; int ; intmin ; intmax )
Kiírás- állományba/képernyő             (const char* ;int* ;int )/(int* ; int)
Rendezés                                (int* ; int)
Keresünk                                (int ; int* )-pozicio
Törlés                                  (int ; int* ; int)
Min-Max                                 (int ; int*)
Másolás(1 tömb-másikba)                 (int* ; int ; int* ; int )*/
int main()
{

    printf("Hello world!\n");
    return 0;
}


void l(int**x;int n)
{
    *x=(int*)malloc(sizeof(int)*n)
    //if(!*x)
}

void Be(const char * fnev,int** px, int* pn)
{
    FILE* fin=fopen(fnev, "rt");//rt-read text
    //if(!fin)...                                            int *x,n;
    fscanf(fin,"%d",&*pn);                                 //fscanf(fin,"%d", &n);
                                                           //l(&x,n) ;       )
    l(px,*pn);                                             //for(int i=0;"%d",&x[i])
     for(int i=0;i<*pn;i++)                                 //*px=x;
        {fscanf(fin,"%d", &(*px)[i]);}//&(*px)=*px+i        // *pn=n;

    fclose(fin);
}





