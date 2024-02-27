#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define pi 3.14
float p,s,r;
int main()
{
    printf(" donner le rayon \n");
    scanf("%f",&r);
    p=2*pi*r;
    s=pi*r*r;
    printf("le périmetre est: \n %f",p);
    printf("\n la surface est : \n %f",s);
    return 0;
}
