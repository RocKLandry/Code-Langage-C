#include <stdio.h>
#include <stdlib.h>
int M1[2][2],M2[2][2],M3[2][2];
int i,j;
int main()
{
    //  remplissage de M1 et M2

    printf("Remplir lA matice M1\n");
    for(i=0;i<2;i++)
    {
       for(j=0;j<2;j++)
       {
           printf("Saisir M1[%i][%i]\t",i,j);
           scanf("%i",&M1[i][j]);
       }

    }

    printf("\nRemplir lA matice M2\n");

    for(i=0;i<2;i++)
    {
       for(j=0;j<2;j++)
       {
           printf("Saisir M2[%i][%i]\t",i,j);
           scanf("%i",&M2[i][j]);
       }

    }

    //Afichage de M1
    printf("\nVoici la matrice M1\n");
    for(i=0;i<2;i++)
    {
       for(j=0;j<2;j++)
       {
           printf("%i\t",M1[i][j]);
       }
       printf("\n");

     }

      // Affichage de M2

     printf("\nVoici la matrice M2\n");
     for(i=0;i<2;i++)
    {
       for(j=0;j<2;j++)
       {
           printf("%i\t",M2[i][j]);
       }
           printf("\n");


    }

    //de calcul de M3 qui le produit de M1 et M2
    for(i=0;i<2;i++)
    {
       for(j=0;j<2;j++)
       {
           M3[i][j]=M1[i][j]*M2[i][j] + M1[i][j+1]*M2[i+1][j];µ
       }

    }


      // Affichage de M3

     printf("\nVoici la matrice M3 produit de M1 et M2\n");
     for(i=0;i<2;i++)
    {
       for(j=0;j<2;j++)
       {
           printf("%i\t",M3[i][j]);
       }
           printf("\n");


    }
    return 0;
}
