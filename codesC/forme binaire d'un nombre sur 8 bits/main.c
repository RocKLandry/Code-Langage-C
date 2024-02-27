#include <stdio.h>
#include <stdlib.h>
int n,r,q;
char b[100];

int main()
{
    printf("donner un nombre compris entre 0 et 255\n");
    scanf("%i",&n);
    do{
        printf("donner un nombre compris entre 0 et 255\n");
        scanf("%i",&n);
    }while((n<0)||(n>255));



    return 0;
}
