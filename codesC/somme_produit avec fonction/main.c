#include <stdio.h>
#include <stdlib.h>
int somme_produit( int a,int b);
int main()
{ int n1,n2;
    printf("donner deux entiers\n");
    scanf("%i %i",&n1,&n2);
    printf(somme_produit(n1,n2));
    return 0;
}
int somme_produit( int a,int b)
{
    int s,p;
    s=a+b; p=a*b;
    printf(" La somme est : \n%i",s);
    if(s>0)
    printf(" \nLa somme est positive");
    else
    printf(" \nLa somme est negative");
    printf(" \nLe produit est : \n%i",p);
     if(p>0)
    printf(" \nLe produit est positif");
    else
    printf("  \nLe produit est negatif");
    return s;
}
