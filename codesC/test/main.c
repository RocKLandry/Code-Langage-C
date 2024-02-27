#include <stdio.h>
#include <stdlib.h>
char d,c;
int i,j;

int main()
{     d=266;
      c=97;
      j=0;

    for(i=0;i<26;i++)// je vais afficher 26 fois  du code ASCII en partant de 97 à 122 precisement c'est de l'ALPHABET
    {
        printf("%c\n",c+j);
        j=j+1;

    }
    printf("%c",d);
    return 0;
}
