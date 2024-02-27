#include <stdio.h>
#include <stdlib.h>
int n,p,i;
int main()
{
    printf("Veillez saisir un nombre\n");
    scanf("%i",&n);
    while(n<1){ printf("\nVeillez saisir un entier naturel non nul\n");
     scanf("%i",&n);}
     for(i=1;i<=12;i++)
     { printf("\n %i X %i = %i",i,n,i*n);}
    return 0;
}
