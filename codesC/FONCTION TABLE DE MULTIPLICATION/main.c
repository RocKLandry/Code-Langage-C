#include <stdio.h>
#include <stdlib.h>
int table(int);
int main()
{ int n;
    printf("donner un nombre\n");
    scanf("%i",&n);
     printf(table(n));
    return 0;
}
int table(int a)
{ int i;
for(i=1;i<=12;i++)
{
    printf("%i X %i = %i \n",i,a,i*a);

}
return i*a;
}
