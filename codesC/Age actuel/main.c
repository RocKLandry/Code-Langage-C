#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int annee_N,annee_A,age;
int main()
{
    printf("Donner l'annee de naissance\n");
    scanf("%i",&annee_N);
    printf("Donner l'annee actuelle \n");
    scanf("%i",&annee_A);
    age=annee_A-annee_N;
    printf("\n Votre age actuel est : \n%ians ",age);
    return 0;
}
