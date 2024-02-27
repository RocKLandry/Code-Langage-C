#include <stdio.h>
#include <stdlib.h>
int piece;
char modele[10];

int main()
{
    printf("DONNEZ LA PIECE\n");
    scanf("%i",&piece);
    switch(piece)
    {
        case 500: printf(" \n vous avez droit a 50 min\n");break;
        case 100: printf(" \n vous avez droit a 30 min\n");break;
        case 50: printf(" \n donner le modele de la piece\n");

        scanf("%s",modele);
           if(((modele[0]=='p')||(modele[0]=='P'))
              &&((modele[1]=='e')||(modele[1]=='E'))
              &&((modele[2]=='t')||(modele[2]=='T'))
              &&((modele[3]=='i')||(modele[3]=='I'))
              &&((modele[4]=='t')||(modele[4]=='T')))
           {
               printf("\n vous avez droit a 15 min\n");
           }
           if(((modele[0]=='g')||(modele[0]=='G'))
              &&((modele[1]=='r')||(modele[1]=='R'))
              &&((modele[2]=='o')||(modele[2]=='O'))
              &&((modele[3]=='s')||(modele[3]=='S')))
           {
               printf(" \n vous avez droit a 25 min\n");
           }
           break;
           case 25: printf(" \n vous avez droit a 10 min"); break;
           case 10: printf(" \n vous avez droit a 5 min"); break;
           default: printf("\n piece incorrecte pas de communication!\n");
    }
    return 0;
}
