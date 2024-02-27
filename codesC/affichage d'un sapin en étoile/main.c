#include <stdio.h>
#include <stdlib.h>
int n,i,j,esp;/* n=nombre de lignes   i=num�ro de la ligne  esp=espace � qauche et � droite des �toiles*/

int main()
{   /* n=nombre de lignes   i=num�ro de la ligne  esp=espace � qauche et � droite des �toiles*/
    printf("Ce programme vous affichera un triangles isocele  en etoile\n");
    printf("Donner  le nombre de ligne\n");
    scanf("%i",&n);


    for(i=1;i<=n;i++)// pour chaque ligne
    {
        esp=n-i;//calcul de l'espace � gauche et � droite de chaque ligne

        for(j=1;j<=esp;j++) //on instale une boucle  pour afficher de l'espace � gauche
        {
            printf(" "); // affichage de l'espace � gauche
        }

        for(j=1;j<=(2*i)-1;j++) // on affiche les �toiles dont le nombre sur chaque ligne est impair
        {
            printf("*");
        }

        printf(" "); // affichage de l'espace � droite

        printf("\n");// un retour � la ligne avant de passeer � la ligne suivante

    }
    return 0;
}
