
#include <stdio.h>
#include <stdlib.h>
int N1,N2,somme;
int main()
{
    printf("donner le premier nombre : \n");
    scanf("%i",&N1);
     printf("donner le deuxieme nombre : \n");
    scanf("%i",&N2);
    somme=0;
    if(N1<=N2) {
        for(int i=N1; i<=N2; i++) {
            somme=somme+i;
        }
    }
    else
    {
        for(int i=N1; i>=N2; i--)
            {
            somme=somme+i;
        }

    }
         printf("lq somme des entiers est : %i \n",somme);
    return 0;
}
