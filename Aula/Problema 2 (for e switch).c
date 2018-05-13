#include <stdio.h>
int main ()
{
    int qtd,x,cod;        //qtd: Quantidade, cod: Código
    float preco=0;
    printf("|CODIGO  |  TAMANHO  |  PRECO UNITARIO\n");
    printf("|1       |  Brotinho |  R$ 12,50\n");
    printf("|2       |  Pequena  |  R$ 22,00\n");
    printf("|3       |  Media    |  R$ 30,00\n");
    printf("|4       |  Grande   |  R$ 34,50\n");
    printf("|5       |  Familia  |  R$ 41,50\n");
    printf("Digite a quantidade de pizzas: ");
    scanf("%d",&qtd);
    for(x=0;x<qtd;x++)
    {
        printf("Digite o codigo da pizza: ");
        scanf("%d",&cod);
        switch(cod)
        {
            case 1: preco+=12.50;
            break;
            case 2: preco+=22.00;
            break;
            case 3: preco+=30.00;
            break;
            case 4: preco+=34.50;
            break;
            case 5: preco+=41.50;
            break;
            default: printf("Erro\n");

        }
    }
    if(preco >= 50 || qtd>3)
        printf("Preco: %.2f",preco*0.8);
    else
        printf("Preco: %.2f",preco);
    return 0;
}
