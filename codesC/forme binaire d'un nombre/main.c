#include <stdio.h>
#include <stdlib.h>
int n,quotient,resutat_apres_division,reste;
char b;
int main()
{
    printf("Donner un nombre \n");
    scanf("%i",&n);
    quotient=n; b=' ';
    do{
        resutat_apres_division=quotient/2;
        reste=quotient-2*resutat_apres_division;

        b="reste(+)b";
        quotient=resutat_apres_division;

    }while(quotient==0);

    printf("\n la forme binaire du nombre lu est : \n %c",b);

    return 0;
}
