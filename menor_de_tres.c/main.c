#include <stdio.h>
#include <stdlib.h>

int main()
{

  int   n1,n2,n3,menor;


    printf("Primeiro Valor: ");
    scanf("%d",&n1);
    printf("Segundo Valor: ");
    scanf("%d",&n2);
    printf("Terceiro Valor: ");
    scanf("%d",&n3);

    if (n1<n2 && n1<n3) {
        menor=n1;
    }
    else if (n2<n3) {
        menor=n2;
    }
    else {
        menor=n3;
    }
    printf("MENOR = %d",menor);



    return 0;
}
