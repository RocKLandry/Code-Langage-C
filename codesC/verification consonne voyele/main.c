#include <stdio.h>
#include <stdlib.h>
char a;
int main()
{
    printf("Donner une lettre de l' alphabet\n");/* là on doit mettre les lettres en minuscule car le langage C est sensible à la casse*/
    scanf("%c",&a);
    if((a=='a')||(a=='i')||(a=='u')||(a=='e')||(a=='y')||(a=='o'))
    {
        printf("\n %c est une VOYELLE",a);
    } else{ printf("\n %c est une CONSONNE",a);}
    return 0;
}
