#include <stdio.h>
#include <math.h>
int main()
{
    float num,aprox,tol,n=0;                      //numero, aproximacao inicial da raiz do numero e tolerancia
    printf("Digite o numero: ");
    scanf("%f",&num);
    printf("Digite a aproximacao: ");
    scanf("%f",&aprox);
    printf("Digite a tolerancia: ");
    scanf("%f",&tol);
    while(n<=tol){
        n++;
        aprox = aprox-1 -(((aprox-1)*(aprox-1)-num)/(2*aprox-1));
    }
    printf("Aproximacao da raiz do numero: %f\n",aprox);
    return 0;
}
