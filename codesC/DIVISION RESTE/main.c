#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int a,b,q,r;
int main()
{
    printf("donner deux nombres \n");
    scanf("%i %i",&a,&b);
    q=a/b;
    r=a-(b*q);
    printf("le quotient de la division de a par b est :\n %i",q);
    printf("\nle reste de la division eucludienne de a par b est :\n %i",r);
    return 0;
}

