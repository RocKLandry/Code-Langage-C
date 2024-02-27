#include <stdio.h>
#include <stdlib.h>
int h,min;

int main()
{
    printf("Ecrire saisir l'heure\n");
    scanf("%i",&h);
    while((h<0)||(h>=24)){ printf(" \nVeillez saisir une heure en format 24H\n");
    scanf("%i",&h);}
    printf("\nVeillez saisir la minute\n");
    scanf("%i",&min);
    while( (min<0)||(min>=60)){ printf(" \nVeillez saisir une minute correcte\n");
    scanf("%i",&min);}
    if((h==23)&&(min==59)){ printf("\nDans une minute il sera 00h 00min\n");}
    if((h==23)&&(min<59)){ min=min+1;
    printf("\nDans une minute il sera %ih %imin\n",h,min);}
    if((h!=23)&&(min==59)){ h=h+1;
    printf("\nDans une minute il sera %ih 00min\n",h);}
    if((h!=23)||(min!=59)){ min=min+1;printf("\nDans une minute il sera %ih %imin\n",h,min);}
    return 0;
}
