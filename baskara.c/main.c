#include <stdio.h>
#include <math.h>

int main()
{
    double x1,x2,delta,a,b,c;

    printf("Coeficiente a: ");
    scanf("%lf", &a);
    printf("Coeficiente b: ");
    scanf("%lf", &b);
    printf("Coeficiente c: ");
    scanf("%lf", &c);

    delta=pow(b,2)-4*a*c;

    if(a==0||delta<0){
        printf("Esta equacao nao possui raizes reais\n");
    }
    else{
    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);
    printf("X1 = %lf\n",x1);
    printf("X2 = %lf\n",x2);
    }




    return 0;
}
