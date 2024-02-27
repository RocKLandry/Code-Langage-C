#include <stdio.h>
#include <stdlib.h>
int liste();
int main()
{
    printf(liste(1));
    return 0;
}
int liste()
{
    int n,i=0,t=0,p;
    do{
        scanf("%i",&n);
        i=i+1;
        if(n%2==0){ t=t+1;}}while(n!=-1);
        p=(t*100)/i;
        printf(" \nil ya %i nombre(s) pairs saisi(s)",t);
        printf(" \nils ont un pourcentage de %i %",p);
    }

