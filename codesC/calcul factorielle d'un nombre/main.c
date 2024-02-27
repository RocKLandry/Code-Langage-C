
#include <stdio.h>
#include <stdlib.h>
int n,factorielle ,i;
int main()
{
    printf("donner un nombre :\n ");
    scanf("%i",&n);
    if((n==0)||(n==1))
        {factorielle=1
        }
    else{
        factorielle=1;
        for(i=2; i<=n; i++){
            factorielle=factorielle*i
        }
    }
    printf("la factorielle du nombre lu est : \n %d",factorielle);
    return 0;
}
