#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,soma;

    printf("Qual a ordem da matriz? ");
    scanf("%d",&n);
    int vet[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Elemento [%d,%d]: ",i,j);
            scanf("%d",&vet[i][j]);
        }
    }

    for(i=0;i<n;i++){
        printf("%d ",vet[i][i]);
    }

    soma=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                if (vet[i][j]<0){
            soma=soma+1;
            }

        }
    }
    printf("\nQUANTIDADE DE NEGATIVOS = %d",soma);






    return 0;
}
