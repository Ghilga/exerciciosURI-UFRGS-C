#include <stdio.h>
int main ()
{
    int cod,x;
    for(x=0;x<3;x++)
    {
        printf("Digite o codigo do seu combustivel abastecido: ");
        scanf("%d",&cod);
        switch(cod)
        {
            case 1: printf("\nVoce escolheu Alcool. Obrigado pela resposta. Tenha um bom dia!\n");
                    return 0;
                    break;
            case 2: printf("\nVoce escolheu Gasolina comum. Obrigado pela resposta. Tenha um bom dia!\n");
                    return 0;
                    break;
            case 3: printf("\nVoce escolheu Gasolina aditivada. Obrigado pela resposta. Tenha um bom dia!\n");
                    return 0;
                    break;
            case 4: printf("\nVoce escolheu Diesel. Obrigado pela resposta. Tenha um bom dia!\n");
                    return 0;
                    break;
            default: printf("Erro\n");
                    break;
        }
    }
    return 0;
}
