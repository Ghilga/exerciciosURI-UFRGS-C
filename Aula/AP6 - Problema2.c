#include <stdio.h>
#define MESES 12
#define TAMANHO 10
int main()
{
    int i,roubos[MESES],maioraumento, mediaanual,aux,soma=1,max=0;
    for(i=0;i < MESES;i++){
        switch(i){
        case 0: printf("Digite o numero de roubos de Janeiro:\n");
        break;
        case 1: printf("Digite o numero de roubos de Fevereiro:\n");
        break;
        case 2: printf("Digite o numero de roubos de Marco:\n");
        break;
        case 3: printf("Digite o numero de roubos de Maio:\n");
        break;
        case 4: printf("Digite o numero de roubos de Abril:\n");
        break;
        case 5: printf("Digite o numero de roubos de Junho:\n");
        break;
        case 6: printf("Digite o numero de roubos de Julho:\n");
        break;
        case 7: printf("Digite o numero de roubos de Agosto:\n");
        break;
        case 8: printf("Digite o numero de roubos de Setembro:\n");
        break;
        case 9: printf("Digite o numero de roubos de Outubro:\n");
        break;
        case 10: printf("Digite o numero de roubos de Novembro:\n");
        break;
        case 11: printf("Digite o numero de roubos de Dezembro:\n");
        break;
        default: printf("Erro!\n");
        }
        scanf("%d",&roubos[i]);
        mediaanual += roubos[i];
        if(i != 0 && roubos[i] > roubos[i-1]){
            maioraumento = i;
        }
    }
    mediaanual = mediaanual/12;
    printf("\nMedia anual: %d\n",mediaanual);
    printf("\nMeses que o numero de ocorrencias ficou abaixo da media anual: \n");                 //tarefa b.
        for(i=0 ;i < MESES; i++){
            if(roubos[i] < mediaanual){
                switch(i){
            case 0: printf("Janeiro\n");
            break;
            case 1: printf("Fevereiro\n");
            break;
            case 2: printf("Marco\n");
            break;
            case 3: printf("Maio\n");
            break;
            case 4: printf("Abril\n");
            break;
            case 5: printf("Junho\n");
            break;
            case 6: printf("Julho\n");
            break;
            case 7: printf("Agosto\n");
            break;
            case 8: printf("Setembro\n");
            break;
            case 9: printf("Outubro\n");
            break;
            case 10: printf("Novembro\n");
            break;
            case 11: printf("Dezembro\n");
            break;
            default: printf("Erro!\n");
                }
            }
        }
        printf("\n");
    switch(maioraumento){                                                                               //tarefa a.
        case 1: printf("O maior aumento no percentual de roubos foi no mes de Fevereiro\n\n");
        break;
        case 2: printf("O maior aumento no percentual de roubos foi no mes de Marco\n\n");
        break;
        case 3: printf("O maior aumento no percentual de roubos foi no mes de Maio\n\n");
        break;
        case 4: printf("O maior aumento no percentual de roubos foi no mes de Abril\n\n");
        break;
        case 5: printf("O maior aumento no percentual de roubos foi no mes de Junho\n\n");
        break;
        case 6: printf("O maior aumento no percentual de roubos foi no mes de Julho\n\n");
        break;
        case 7: printf("O maior aumento no percentual de roubos foi no mes de Agosto\n\n");
        break;
        case 8: printf("O maior aumento no percentual de roubos foi no mes de Setembro\n\n");
        break;
        case 9: printf("O maior aumento no percentual de roubos foi no mes de Outubro\n\n");
        break;
        case 10: printf("O maior aumento no percentual de roubos foi no mes de Novembro\n\n");
        break;
        case 11: printf("O maior aumento no percentual de roubos foi no mes de Dezembro\n\n");
        break;
        default: printf("Erro!\n");
        }
    for(i=1; i < 12; i++){                                                                      //tarefa c.
            if(roubos[i] > roubos[i-1]){
                soma++;
                aux = soma;
                if(max < aux){
                max = aux;
                }
            }
            else soma = 1;
        }
    printf("Numero de meses em que se observou o maior aumento continuo nas ocorrencias registradas: %d\n",max);
    return 0;
}
