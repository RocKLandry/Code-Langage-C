#include <stdio.h>
#include <stdlib.h>
int n ;
int main()
{
    printf("Donner un nombre \n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf(" \n le nombre saisi est pair");
    }
    else{
        printf(" \n le nombre saisi est impair");
    }
    return 0;
}
