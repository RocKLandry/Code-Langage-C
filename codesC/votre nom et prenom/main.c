#include <stdio.h>
#include <stdlib.h>
char nom[15];
char prenom[10];
int i;

int main()
{
    printf("Saisir votre nom \n");
    gets(nom);// la fonction gets permet de recuperer une chaire de caractere
    printf("Saisir votre prenom\n");
    gets(prenom);
    printf("\n Voici votre nom verticalement:");
    for(i=0;nom[i]!='\0';i++)/* on met une boucle pour afficher le nom caractere par caractere avec une condition tant
    que nom[i] different de \0  qui est le caractere de fin d'une chaine alors on continue d'aafficher les caractreres */
    {
        printf("\n%c",nom[i]);
    }
    printf("\n\nVoici votre prenom :\n");

    puts(prenom);// la fonction puts permet d'afficher une chaine de caractere
    return 0;
}
