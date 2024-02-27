#include <stdlib.h>
#include <string.h>
int n,r,q,reste,i;
char restec[100] ,b[100];
int main()
{do
{
    printf("donner un nombre compris entre o et 255 : ");
     scanf("%d",&n);
}
  while((n<0)||(n>255));
  q=n;
  for(i=1;i<=8;i++)
  {
      r=q/2;
      reste=q-r*2;
      itoa(reste,restec,10);
      strcat(restec,b);
      strcpy(b,restec);
      q=r;
  }
  printf(b);
  return 0;
}
