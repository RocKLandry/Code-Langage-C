#include <stdio.h>
#include <stdlib.h>
int un_entier();
int verifier_un_entier( int n);
int un_entier_0_255();
int factoriel(int j);
void info(int c);
void afficher_factoriel(int c);
void principale(int c);



int main()
{
    int n,p;

     principale(1);b

    return 0;
}
int un_entier()
{
    int n;
    printf("donner un entier \n");
    scanf("%i",&n);
    return n;
}
int verifier_un_entier( int n)
{
    int a,p;
    a=un_entier();
    if((a>=0)&&(a<=255))
        p=1;
    else
        p=0;
    return p;
}
int un_entier_0_255()
{
    int c;
    do
    {
        c=verifier_un_entier(0);
    }while(c!=1);
    return c;
}
int factoriel(int j)
{
    int i,f=1;
    j=un_entier();
    while(j<0)
    {
        printf("  \nLe factoriel d'un nombre negatif n'existe pas");
        j=un_entier();

    }
    if((j==0)||(j==1))
    {
        f=1;
    }
    else
    {
        for(i=1;i<=j;i++)
        {
            f=f*i;
        }

    }
    return f;
}
void info(int c)
{
    int a;
    a=un_entier();
    printf("Le  nombre lu est  \n%i",a);
}
void afficher_factoriel(int c)
{
    int a,m;
    a=factoriel(5);
    info(a);

}
void principale(int c)
{
    int x,f,t=0,s=0,b=0,k=0,l=0;
    do
    {
        t=t+1;
        c=un_entier();
        f=factoriel(c);
        s=s+f;
        printf("Le factoriel est  \n%i",f);
        x=verifier_un_entier(c);
        if(x==1)
            b=b+1;
        if(c%2==0)
            k=k+1;
        else
            l=l+1;
     }while(c!=1111111111);
     printf("Le nombre total des nombres lus est \n %i",t);
     printf(" la somme des factoriels est \n %i",s);
     printf(" nombres compris entre 0 et 255  \n%i",b);
     printf(" nombres pairs  \n%i",k);
     printf(" nombres impairs  \n%i",l);
}
