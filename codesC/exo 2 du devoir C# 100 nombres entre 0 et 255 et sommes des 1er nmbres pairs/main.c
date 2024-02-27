#include <stdio.h>
#include <stdlib.h>
int n,i,som,p;
int main()
{   p=0;
    som=0;
    for(i=1;i<=10;i++)
    { n=-1;
     while((n<0)||(n>255))
     {
         printf("donner un nombre:\n");
         scanf("%d",&n);
     }
      if(p<3)
         {
             if(n%2==0)
             {
                 som=som+n;
                 p=p+1;
             }
         }

    }
    printf("la somme des 100 nombres pairs est de: %d",som);
    return 0;
}
