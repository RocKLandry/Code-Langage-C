#include <stdio.h>
#include <stdlib.h>
int t[3][2];
int i,j,s=0,n,s,p=0,min,max;
float m;

int main()
{    printf("Remplir le tableau de 3 lignes et 2 colonnes\n");


    for(i=0;i<3;i++) // remplissage du tableau
{
    for(j=0;j<2;j++)
    {
     printf("Saisir t[%i][%i]\t",i,j);
     scanf("%i", &t[i][j]);
    }
}
 printf("Voici le tableauu rempli\n"); //affichage du tableau

  for(i=0;i<3;i++)
{
    for(j=0;j<2;j++)
    {
     printf("%i", t[i][j]);
    }
    printf("\n");
}
     min=t[0][0];
     max=t[0][0];

   for(i=0;i<3;i++) // recherche du min et du max
{
    for(j=0;j<2;j++)
    {
     if(min>t[i][j])
     {
         min=t[i][j];
     }

     if(t[i][j]>max)
     {
         max=t[i][j];
     }
    }
}
  printf("\nLe maximun du tableau est:\t%i",max);
  printf("\nLe minimum du tableau est:\t%i",min);


   for(i=0;i<3;i++)   //  calcul de la somme su tableau
{
    for(j=0;j<2;j++)
    {
     s=s+t[i][j];
    }
}

m=s/6;

printf("\n La somme des elements du tableau est :\t%i",s);
printf("\n La  moyenne des elementsdu tableau est:\t%f",m);
printf("\nSaisir la valeur dont vous voulez connaitre le nombre d'occurence\n");
scanf("%i",&n);
 for(i=0;i<3;i++)  // recherche d'une occurence
{
    for(j=0;j<2;j++)
    {
      if(t[i][j]==n)
      {
          p=p+1;
      }
    }
}

printf("\n La valeur recherchee a ete saisie %i FOIS\n",p);







    return 0;
}
