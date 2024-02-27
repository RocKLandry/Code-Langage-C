#include <stdio.h>
#include <stdlib.h>
int a;
int main()
{
    printf("donner l'annee\n");
    scanf("%i",&a);
    if((a%4==0)&&(a%100!=0))
        { printf(" \n l'annee saisie est BISSEXTILE");
        } if((a%4==0)&&(a%100==0)&&(a%400==0)) { printf("\n l'annee saisie est BISSEXTILE");}
        else {printf("\n l'annee saisie n'est pas BISSEXTILLE");}
    return 0;
}
