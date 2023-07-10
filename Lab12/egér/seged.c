#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "seged.h"
LAB*Create(const char*fn)
{   FILE*f;
    f=fopen(fn,"rt");
    if(!f){printf("Allomany hiba!");}
    LAB*a;
    a=(LAB*)calloc(1,sizeof(LAB));
    fscanf(f,"%d%d",&a->n,&a->m);
    a->labirintus=(int**)calloc(a->n,sizeof(int*));
    int i,j;
    for(i=0;i<a->n;++i)
    {
        a->labirintus[i]=(int*)calloc(a->m,sizeof(int));
    }

    for(i=0;i<a->n;++i)
    {
        for(j=0;j<a->m;++j)
        {
            fscanf(f,"%d",&a->labirintus[i][j]);
        }
    }
    fscanf(f,"%d%d%d%d",&a->ex,&a->ey,&a->sx,&a->sy);
    a->labirintus[a->ex][a->ey]=2;
    a->labirintus[a->sx][a->sy]=3;
    fclose(f);
    return a;
}

void Destroy(LAB*a)
{
    int i;
    for(i=0;i<a->n;++i)
        free(a->labirintus[i]);
    free(a->labirintus);
    free(a);
}

void Print(LAB*a)
{   int i,j;
    for(i=0;i<a->n;++i)
    {
        for(j=0;j<a->m;++j)
        {
            printf("%2d",a->labirintus[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void MOVE(LAB*a,char ch)//switch, getch()
{

    switch(ch)
    {
        case 'w': if((a->ex>0)&&(a->labirintus[a->ex-1][a->ey]!=1)){a->labirintus[a->ex][a->ey]=0; --a->ex;} break;
        case 's': if((a->ex<a->n-1)&&(a->labirintus[a->ex+1][a->ey]!=1)) {a->labirintus[a->ex][a->ey]=0; ++a->ex;}   break;
        case 'a': if(a->ey>0&&(a->labirintus[a->ex][a->ey-1])!=1) {a->labirintus[a->ex][a->ey]=0; --a->ey;}  break;
        case 'd': if(a->ey<a->m-1&&(a->labirintus[a->ex][a->ey+1])!=1) {a->labirintus[a->ex][a->ey]=0; ++a->ey;} break;
    }
     a->labirintus[a->ex][a->ey]=2;
}

int Solve(LAB*a)
{
    return (a->ex==a->sx)&&(a->ey==a->sy);
}




LAB1D*Create1D(const char*fn)
{   FILE*f;
    f=fopen(fn,"rt");
    if(!f){printf("Allomany hiba!");}
    LAB1D*a;
    int j;
    a=(LAB1D*)calloc(1,sizeof(LAB1D));
    fscanf(f,"%d%d",&a->n,&a->m);
    a->labirintus=(int*)calloc(a->n*a->m,sizeof(int));
    for(j=0;j<(a->m)*(a->n);++j)
        {
            fscanf(f,"%d",&a->labirintus[j]);
        }
    int b,c,d,e;
    fscanf(f,"%d%d%d%d",&b,&c,&d,&e);
    a->ex=a->m*b+c;
    a->sx=a->m*d+e;
    a->labirintus[a->ex]=2;
    a->labirintus[a->sx]=3;
    fclose(f);
    return a;
}

void Print1D(LAB1D*a)
{   int i,j;
    for(i=0;i<a->n;++i)
    {
        for(j=a->m*i;j<a->m+a->m*i;++j)
        {
            printf("%2d",a->labirintus[j]);
        }
        printf("\n");
    }
    printf("\n");
}

int Solve1D(LAB1D*a)
{
    return (a->ex==a->sx);
}

void MOVE1D(LAB1D*a,char ch)//switch, getch()
{

    switch(ch)
    {
        case 'w': if(((a->ex)-(a->m)>=0)&&(a->labirintus[(a->ex)-(a->m)]!=1)){a->labirintus[a->ex]=0; a->ex-=a->m;} break;
        case 's': if((a->ex+a->m<(a->m)*(a->n))&&(a->labirintus[a->ex+a->m]!=1)) {a->labirintus[a->ex]=0; a->ex+=a->m;}   break;
        case 'a': if((a->ex%a->m!=0)&&(a->labirintus[a->ex-1]!=1)) {a->labirintus[a->ex]=0; --a->ex;}  break;
        case 'd': if(((a->ex+1)%a->m!=0)&&(a->labirintus[a->ex+1]!=1)) {a->labirintus[a->ex]=0; ++a->ex;} break;
    }
     a->labirintus[a->ex]=2;
}
