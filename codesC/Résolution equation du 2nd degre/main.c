#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float a,b,c,d,x1,x2;
int main()
{
    printf(" Donner les valeurs de a \n");
    scanf("%f",&a); while(a==0)
    { printf("\nDonner une valeur de a non nulle\n");
    scanf("%f",&a);}
    printf("\nDonner la valeur de b\n");
    scanf("%f",&b);
    printf("\nDonner la valeur de c\n");
    scanf("%f",&c);
    d=(b*b)-4*a*c;
    if(d>0){ x1=(-b-sqrt(d))/2; x2=(-b+sqrt(d))/2; printf("Les solutions sont:\n%.f et %.f",x1,x2);}
    if(d==0){ x1=-b/(2*a); printf("\n Les solutions sont \nx1 = x2=%.f",x1);}
    if(d<0){
             x1=sqrt(d); x2=sqrt(d)/2;
             printf(" \n Il existe deux solutions complexes \n\nx1=(-%.f %.fi)/%.f  \n\net \n\nx2=(-%.f +%.fi)/%.f",b,x2,2*a,b,-x2,2*a);

             }

    return 0;
}
