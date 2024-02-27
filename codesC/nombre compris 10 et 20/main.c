#include <stdio.h>
#include <stdlib.h>
int a;
int main()
{
    printf("Donner un nombre entre 10 et 20\n");
    scanf("%i",&a);
    while((a<10)||(a>20))
    { if(a<10) { printf("\n PLUS GRAND\n");}
    if(a>20){ printf("\n PLUS PETIT\n");}

        scanf("%i",&a);
    }
     printf("\n saisie correcte");
    return 0;
}
