#include <stdio.h>
#include <string.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()


{
  int idade1, idade2;
  double media;
  char nome1[50], nome2[50];

  printf("Dados da primeira pessoa: ");
  printf("\n");
  printf("Nome: ");
  ler_texto(nome1,50);
  printf("Idade: ");
  scanf("%d",&idade1);

  printf("Dados da segunda pessoa: ");
  printf("\n");
  printf("Nome: ");
  limpar_entrada();
  ler_texto(nome2,50);
  printf("Idade: ");
  scanf("%d",&idade2);
  media=((idade1+idade2)/2);

  printf("A idade media de %s com %d e %s com %d eh de %.1lf anos",nome1,idade1,nome2,idade2,media);






    return 0;
}
