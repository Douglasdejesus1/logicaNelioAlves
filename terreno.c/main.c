#include <stdio.h>


int main()
{
    double largura,comprimento,valor,area,preco;


    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);
    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf",&valor);

    area=largura*comprimento;
    preco=area*valor;

    printf("Area do terreno:  %.1lf m2\n",area);
    printf("Preco do terreno: R$%.2lf ", preco);








    return 0;
}
