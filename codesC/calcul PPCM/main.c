#include <stdio.h>
#include <stdlib.h>
int a,b,c,max,min,reste,ppcm;
int main()
{
    printf("donner deux nombres \n");
    scanf("%i%i",&a,&b);
    if(a>b)
    {
        min=b;
        reste=a%b;
    }
    else
    {
        min=a;
        reste=b%a;
    }
    while(reste!=0)
    {
        c=min;
        min=reste;
        reste=c%min;
    }
    ppcm=(a*b)/min;
    printf("le PPCM est %i",ppcm);
    return 0;
}
