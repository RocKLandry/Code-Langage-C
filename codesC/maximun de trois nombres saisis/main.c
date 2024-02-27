#include <stdio.h>
#include <stdlib.h>
float a,b,c,m;
int main()
{m=0;
    printf("Donner un nombre\n");
    scanf("%f",&a);
    printf("Donner un second nombre\n");
    scanf("%f",&b);
    printf("Donner un troisieme nombre\n");
    scanf("%f",&c);

    if(a>m)
        { m=a;}
    if(b>m)
        { m=b;}
    if(c>m)
        { m=c;}
    printf(" \n Le plus grand des trois nombres saisis est:\n%.f",m);
    return 0;
}
