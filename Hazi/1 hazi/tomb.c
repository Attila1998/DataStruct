void Letrehozas (int **px, int n)
{
    *px=(int*)calloc(n,sizeof(int));
    if(!*px)
    {
        printf("Hiba!");
        return 0;
    }
}


void Letrehozas2 (int **px, int n)
{
    *px=(int*)malloc(n*sizeof(int));
    if(!*px)
    {
        printf("Hiba!");
        return 0;
    }
}


void Feltoltes(int *x,int n, int a, int b)//a-tol b-ig random szamok
{
    for(int i=0; i<n; i++)
    {
        x[i]=rand()%(b-a+1)+a;
    }
}


void Kiiras   (int *x, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%i ",x[i]);
    }
    printf("\n");
}

void Rendezes(int*t,int n)
{
    int i,ok,m,s;
    m=n-1;
    do
    {
        ok=1;
        for(i=0; i<m; i++)
        {
            if(t[i]>t[i+1])
            {
                s=t[i];
                t[i]=t[i+1];
                t[i+1]=s;
                ok=0;
            }
        }
        m=m-1;
    }
    while(!ok);
}



int Kereses(int *x, int n, int c)
{
    for ( int i = 0 ; i < n ; ++i )
    {
        if ( x[i] == szam )
        {
            return i;
        }
    }
    return -1;


int Binariskereses(int *a, int n, int c)
{
    int ah = 0, fh = n – 1, kozep;
    while( ah <= fh )
    {
        kozep = ( ah + fh ) / 2;
        if ( x[kozep] == c )
        {
            return kozep;
        }
        else if ( x[kozep] > c )
        {
            fh = kozep – 1;
        }
        else
        {
            ah = kozep + 1;
        }
    }
    return -1;
}

int Minimum(int *x, int n)
{
    int mini;
    for(int i=0; i<n; i++)
    {
        mini=x[0];
        if(x[i]<=mini)
        {
            mini=x[i];
        }
    }
    return mini;
    printf("\n");

}

int Maximum(int *x,int n)
{
    int maxi;
    for(int i=0; i<n; i++)
    {
        maxi=x[0];
        if(x[i]>=maxi)
        {
            maxi=x[i];
        }
    }
    return maxi;
    printf("\n");
}

void Torles(*x,*n,f)
{
int i,j;
for(i=0;i<*n;i++)
{
    if(x[i]==c)
    {
        for(j=i,j<*n-1,j++)
        {
            x[j]=x[j+1];
        }
        *n=*n-1;
    }
}
*x=(int*)realloc((*n)*sizeof(int));
}
