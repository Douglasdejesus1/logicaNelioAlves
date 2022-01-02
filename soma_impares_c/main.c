#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,m,n,soma;

    printf("Digite dois numeros: \n");
    scanf("%d",&m);
    scanf("%d",&n);

    soma=0;
    for (i=m+1;i<n;i++){
            if (i%2!=0){

                soma=soma+i;
            }
    }
    printf("SOMA DOS IMPARES %d",soma);





    return 0;
}
