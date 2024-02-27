#include <stdio.h>
#include <stdlib.h>
int t[20][20];
int i,j;

int main()
{       /* Ce code affiche une matrice identité*/
        for(i=0;i<20;i++)
        {

            for(j=0;j<20;j++)
            {
                if(i==j)

              {
                  t[i][j]=1;
              }

                else
               {
                   t[i][j]=0;
               }

            }



        }



    for(i=0;i<20;i++)
    {
         for(j=0;j<20;j++)
         {
              printf("%i",t[i][j]);
         }
         printf("\n");
    }

    return 0;
}
