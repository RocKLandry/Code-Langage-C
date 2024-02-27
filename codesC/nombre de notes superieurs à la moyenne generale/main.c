#include <stdio.h>
#include <stdlib.h>
float s,m,M;
int n,i,t=0;
int main()
{
    printf("Veillez saisir le nombnre de notes\n");
    scanf("%i",&n);
    printf("Saisir les notes\n");
    s=0;
    for(i=1;i<=n;i++)
    {
        scanf(" %f",&m);
        s=s+m;
        M=s/n;


        }
         printf("\n Veillez resaisir les notes\n");

        for(i=1;i<=n;i++)
        {


        scanf(" %f",&m);
        if(m>M)
        {
            t=t+1;
        }
        }
    printf("  La moyenne generale est :\n %f\n",M);
    printf("  Le nombre de notes superieures a la moyenne est :\n %i",t);
    return 0;
}
