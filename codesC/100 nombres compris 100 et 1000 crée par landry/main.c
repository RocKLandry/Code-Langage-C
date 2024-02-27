#include <stdio.h>
#include <stdlib.h>
int n,i=0;
int main()
{

    printf("donner 100 nombres compris 100 et 1000\n");
    while(i<100)
        {
            scanf("%i",&n);
            if ((n>=100)&&(n<=1000)){i=i+1;}

        }
    printf("\nFelicitation vous avez saisis 100 nombres compris entre 100 et 1000");
    return 0;
}
