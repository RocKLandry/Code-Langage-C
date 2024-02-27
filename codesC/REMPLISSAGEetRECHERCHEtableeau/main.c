#include <stdio.h>
#include <stdlib.h>
int i,n;
int tab[10];
int * triCroissant(int tab[10]);//*  c'est pour retourner un tableau
int main()
{

    for(i=0;i<=9;i++)
    {
        printf("donner un nombre :");
        scanf("%d",&tab[i]);
    }
    printf("Voici le contenu du tableau: \n");

    for(i=0;i<=9;i++)
    {
        printf("%d \n",tab[i]);

    }

// recherche d'une valeur dans le tableau
    int x;
    int trouver=0;
    printf("donner un nombre\n");
    scanf("%d",&x);
    int i=0;
    while((i<=9)&&(trouver==0))
    {
        if(tab[i]==x)
        {
            trouver=1;
        }
        i=i++;
    }
    if(trouver==1)
    {
        printf(" OUI le nombre cherche se trouve dans le tableau\n");
    }
    else
    {
       printf(" NON le nombre cherche se trouve pas dans le tableau\n");

    }
// tri d'un tableau
    int j,c;
    for(i=0;i<=8;i++)
    {
        for(j=i+1;j<=9;j++)
        {
            if(tab[i]>tab[j])
            {
                c=tab[i];
                tab[i]=tab[j];
                tab[j]=c;
            }
        }
    }

    printf("Voici le tableau apres le tri croissant\n");

    for(i=0;i<=9;i++)
    {
        printf("%d \n",tab[i]);

    }

//APPEL DE LA FONCTION triCroissant
    int* tab2;
    tab2=triCroissant(tab);


        for(i=0;i<=9;i++)
    {
        printf("%d \n",tab2[i]);

    }

return 0;
}

int * triCroissant(int tab[10])// int* permet de creer un type de  tableau d'entier
{
    int i,j,c;

    for(i=0;i<=8;i++)
    {
        for(j=i+1;j<=9;j++)
        {
            if(tab[i]>tab[j])
            {
                c=tab[i];
                tab[i]=tab[j];
                tab[j]=c;
            }
        }
    }

      return tab;

}
