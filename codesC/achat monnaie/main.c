#include <stdio.h>
#include <stdlib.h>
int n,i,nb10e=0,nb5e=0,s=0,pa,mnt, monnaie,reste;

int main()
{
    printf(" donner le nombre d'article a payer \n");
    scanf("%i",&n);
    printf("saisir les differents montants des articles \n");
    for(i=1;i<=n;i++)
    {

        do{
            scanf("%i",&pa);
        }
        while(pa<0);
        s=s+pa;
    }
    printf("vous devez payer %i EURO(S) \n",s);
     printf("\nveillez donner votre montant ! \n");
     scanf("%i",&mnt);
     while(mnt<s)
     {
          printf("votre montant est inferieur a ce que vous devrez payer ! \n");
          scanf("%i",&mnt);

     }
     monnaie=mnt-s;
     reste=monnaie;
     while(monnaie> 10)
     {
         monnaie=monnaie-10;
         nb10e=nb10e+1;
     }
     if(monnaie>5)
     {
         monnaie=monnaie-5;
         nb5e=nb5e+1;
     }
     printf("\n votre monnaie est de %i EURO(S) \n",reste);
     printf("\n votre monnaie est repartie comme suit:\n %i billet(s)de 10 euros \n %i billet de 5 euros \n %i billet(s) de 1 euro\n",nb10e,nb5e,monnaie);


    return 0;
}
