#include <stdio.h>
#include <stdlib.h>
int a,b,r,min,min2;
int main()
{
    printf("Donner les entiers dont vous voullez calculer le PGCD\n");
    scanf("%i %i",&a,&b);
    while((a<0)||(b<0))
    {
        printf(" Aucune valeur ne doit etre negative\n");
        scanf("%i %i",&a,&b);
    }

    while((a==0)&&(b==0))
    {
        printf("Les deux valeurs ne peuvent etre nulle simultanement!\n");
        scanf("%i %i",&a,&b);
    }

    if(a>b)
    {
        min=b;
        r=a%b;
    }
    else
    {
        min=a;
        r=b%a;
    }

    while(r!=0)
    {
        min2=min;
        min=r;
        r=min2%min;
    }

    printf("\n Le PGCD de %i et %i est %i",a,b,min);

    return 0;
}
