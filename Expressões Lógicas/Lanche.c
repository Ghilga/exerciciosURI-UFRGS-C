#include <stdio.h>
int main ()
{
    int produto,quantidade;
    float total;
    scanf("%d",&produto);
    scanf("%d",&quantidade);

    switch(produto){
        case 1: printf("Total: R$ %.2f\n",4.0*quantidade);
            break;
        case 2: printf("Total: R$ %.2f\n",4.5*quantidade);
            break;
        case 3: printf("Total: R$ %.2f\n",5.0*quantidade);
            break;
        case 4: printf("Total: R$ %.2f\n",2.0*quantidade);
            break;
        case 5: printf("Total: R$ %.2f\n",1.5*quantidade);
            break;
        default: printf("Erro\n");
    }
    return 0;
}
