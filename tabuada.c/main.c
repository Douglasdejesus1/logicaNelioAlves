#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,resultado,i;

    printf("Deseja a tabuada para qual valor? \n");
    scanf("%d",&n);

    for (i=1;i<=10;i++){
    resultado=n*i;
    printf("%d x %d = %d \n",n,i,resultado);
    }

    return 0;

}
