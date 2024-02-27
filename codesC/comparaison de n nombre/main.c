#include <stdio.h>
#include <stdlib.h>
int n,max,i,m,p;
int main()
{   max=0; p=1;
    printf("Saisir le nombre de nombre a comparer\n");
    scanf("%i",&n);
    printf("\nSaisir les valeurs a comparer\n");
    for(i=1;i<=n;i++){
    scanf("%i\n",&m); if(m>max) {max=m; p=i;} }
    printf(" \nLe plus grand nombre est : \n %i",max);
    printf("\nIl a ete saisi au rang:\n %i",p);
    return 0;
}
