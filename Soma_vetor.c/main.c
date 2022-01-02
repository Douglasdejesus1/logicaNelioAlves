#include <stdio.h>

int main()
{

    int n,i;

    printf("Quantos numeros voce vai digitar \n");
    scanf("%d",&n);

    double vet[n],soma,media;

    for (i=0;i<n;i++){
        printf("Digite um numero: ");
        scanf("%lf",&vet[i]);
    }

    printf("\nValores: ");
    for (i=0;i<n;i++){
        printf("%.1lf ",vet[i]);
    }
    soma=0;
    for (i=0;i<n;i++){
        soma=soma+vet[i];
    }

    printf("\nSOMA = %.2lf\n",soma);
    media=soma/n;
    printf("MEDIA = %.2lf\n",media);


    return 0;
}
