#include <stdio.h>
#include <stdlib.h>
int T[10][5];
int i,j;

int main()
{

    for(i=0;i<10;i++)
   {
      for(j=0;j<5;j++)
      {
        T[i][j]=0;
      }
   }


    for(i=0;i<10;i++)
   {
           for(j=0;j<=4;j++)
           {
             printf("%i",T[i][j]);
           }

            printf("\n");

   }
    return 0;
}
