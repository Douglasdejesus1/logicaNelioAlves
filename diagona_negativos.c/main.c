#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,m,n;

    printf("Qual a quantidade de linhas da matriz: ");
    scanf("%d",&m);
    printf("Qual a quantidade de colunas da matriz: ");
    scanf("%d",&n);

    double mat[m][n];
    double vet[m];

    for (i=0;i<m;i++){
    printf("Qual os elementos da %d a linha: \n",i+1);
        for (j=0;j<n;j++){
        scanf("%lf",&mat[i][j]);
        }
    }

    for (int i=0;i<m;i++){
        vet[i]=0;
        for(j=0;j<n;j++){
        vet[i]=vet[i]+mat[i][j];
        }
    }
    printf("VETOR GERADO : \n");
    for(i=0;i<m;i++){
            printf("%.1lf\n",vet[i]);

    }



return 0;
}
