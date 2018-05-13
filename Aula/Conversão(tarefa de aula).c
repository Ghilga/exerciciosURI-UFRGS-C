#include <stdio.h>
int main()
{
    double preco,taxa;
    printf("Valor em R$: ");
    scanf("%lf",&preco);
    printf("Valor da Taxa do Dolar: ");
    scanf("%lf",&taxa);
    printf("Valor convertido = R$ %.2lf\n",preco*taxa);

    return 0;
}
//Dia 08/08/16, Dolar: U$:3,17
