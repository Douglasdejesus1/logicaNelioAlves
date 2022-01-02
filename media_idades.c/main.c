#include <stdio.h>
#include <stdlib.h>

int main()
{

    int idade, qnt, soma;
    double media;

    printf("Digite as Idades: \n");
    scanf("%d",&idade);
    soma=0;
    qnt=0;

    while(idade>=0){
    soma=soma+idade;
    qnt=qnt+1;
    scanf("%d",&idade);
    }
    if  (qnt==0){
    printf("IMPOSSIVEL CALCULAR");
    }
    else{
    media=soma/qnt;
    printf("MEDIA = %lf",media);
    }



    return 0;
}
