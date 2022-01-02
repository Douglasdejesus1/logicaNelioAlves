#include <stdio.h>
#include <string.h>

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    int n,i;

    printf("Quantas pessoas serao digitas: ");
    scanf("%d",&n);

    char nomes[n][50];
    int veti[n];
    double veta[n],atotal,media,menores;

    atotal=0;
    for(i=0;i<n;i++){
        printf("Dados da %ia pessoa:\n",i+1);
        printf("Nome: ");
        limpar_entrada();
        gets(nomes[i]);
        printf("Idade: ");
        scanf("%d",&veti[i]);
        printf("Altura: ");
        scanf("%lf",&veta[i]);
        atotal=atotal+veta[i];
    }
    media=atotal/n;
    printf("\nAltura media: %.2lf\n",media);

    menores=0;
    for(i=0;i<n;i++){
        if (veti[i]<16){
            menores=menores+1;
        }
    }
    menores=menores/n*100;
    printf("Pessoas com menos de 16 anos: %.1lf%% \n",menores);

    for(i=0;i<n;i++){
        if (veti[i]<16){
            printf("%s\n",nomes[i]);
        }
    }



    return 0;
}
