
#include <stdlib.h>
int pgcd(int,int);
int PPCM(int,int);
int pgcd3(int,int,int);
int ppcm3(int,int,int);
int un_entier();
void info(int);


int main()

{
    int x,y,z;
    x= un_entier();
    y= un_entier();
    z= un_entier();

    int pgcd,ppcm;

    pgcd=pgcd3(x,y,z);
    ppcm=ppcm3(x,y,z);

    printf("\n voici le pgcd des trois nombres. \n");
    info(pgcd);

    printf("\n voici le ppcm des trois nombres. \n");
    info(ppcm);

    return 0;
}

int pgcd(int a, int b)
{ int min,max,reste,pgcd,c;
    if(a>b)
    {
        min=b;
        reste=a%b;
    }
    else
    {
        min=a;
        reste=b%a;
    }
    while(reste!=0)
    {
        c=min;
        min=reste;
        reste=c%min;
    }
    pgcd= min;
    return pgcd;
}

int PPCM(int a,int b)
{
    int PPCM;
    PPCM=(a*b)/pgcd(a,b);
    return PPCM;
}

int pgcd3(int a,int b,int c)
{
    int pgcd3;
    pgcd3=pgcd(pgcd(a,b),c);
    return pgcd3;
}
int ppcm3(int a,int b,int c)
{
   int ppcm3;
   ppcm3=PPCM(PPCM(a,b),c);
   return ppcm3;
}
int un_entier()
{
    int a;
    do
    {
        printf("donner un entier non nul \n");
        scanf("%i",&a);
    }
    while(a<=0);
     return a;
}
void info(int a)
{
    printf("le nombre est \n : %i",a);
}
