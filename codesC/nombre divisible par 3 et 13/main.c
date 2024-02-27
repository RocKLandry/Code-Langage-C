#include <stdio.h>
#include <stdlib.h>
int a;
int main()
{
    printf("veillez saisir un nombre\n");
    scanf("%i",&a);
    if((a%3==0)&& (a%13==0)){ printf("\nLe nombre saisi est divisible par 3 et 13");}
    else { printf("\n Le nombre saisi n'est pas divisible par 3 et 13");}
    return 0;
}
