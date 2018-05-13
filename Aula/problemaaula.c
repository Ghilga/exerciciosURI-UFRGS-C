#include <stdio.h>
int main ()
{
    int qtd,qtd1,qtd2,qtd3,i,codigo;             //qtd: Quantidade
    float cod1,cod2,cod3;
    cod1=15.80;
    cod2=17.90;
    cod3=28.50;
    printf("| Opcao  |    Descricao    |   Preco   |\n");
    printf("| 1      |   X-Fominha     |   R$15.80 |\n");
    printf("| 2      |   X-MortoDeFome |   R$17.90 |\n");
    printf("| 3      |   X-Guloso      |   R$28.50 |\n");
    printf("Digite o numero de pedidos: ");
    scanf("%d",&qtd);
    for (i=1;i<=qtd;i++)
        {
        printf("Digite o numero da opcao: ");
        scanf("%d",&codigo);
        switch(codigo)
            {
                case 1: qtd1 += 0;
                break;
                case 2: qtd2 += 0;
                break;
                case 3: qtd3 += 0;
                break;
                default: printf("Opcao indisponivel\n");
            }
        }
        printf("Resumo das vendas:\n");
        printf("- %d X-Fominha vendido(s). Receita total: R$%.2f \n",qtd1,cod1*qtd1);
        printf("- %d X-MortoDeFome vendidos(s). Receita total: R$%.2f \n",qtd2,cod2*qtd2);
        printf("- %d X-Guloso vendido(s). Receita total: R$%.2f \n",qtd3,cod3*qtd3);
    return 0;
}
