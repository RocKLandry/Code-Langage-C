#include <stdio.h>
#include <stdlib.h>
int a;
int main()
{
    printf(" Donner le numero du mois\n");
    scanf("%i",&a);
    switch(a)
    {

        case 1: printf(" \n Ce mois a 31 jours"); break;
        case 2: printf("\n Ce mois a 28 ou 29 jours"); break;
        case 3: printf("\n Ce mois a 31 jours"); break;
        case 4: printf("\n Ce mois a 30 jours"); break;
        case 5: printf("\n Ce mois a 31 jours");break;
        case 6: printf("\n Ce mois a 30 jours"); break;
        case 7: printf("\n Ce mois a 31 jours"); break;
        case 8: printf("\n Ce mois a 31 jours"); break;
        case 9: printf("\n Ce mois a 30 jours"); break;
        case 10: printf("\n Ce mois a 31 jours"); break;
        case 11: printf("\n Ce mois a 30 jours"); break;
        case 12: printf("\n Ce mois a 31 jours"); break;
        default: printf(" \n Le numero saisi ne correspond a aucun mois");


    }
    return 0;
}
