#include <stdio.h>
float le_nota();

int main(){
    float media;
    int novoCalculo;
    do{
        media = le_nota();
        printf("media = %.2f\n",media);
        do{
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&novoCalculo);
        }while(novoCalculo < 1 || novoCalculo > 2);
    }while(novoCalculo == 1);
}

float le_nota(){
    int i;
    float nota_prova;
    float media=0;
    for(i=0; i<2; i++){
        do{
            scanf("%f",&nota_prova);
            if(nota_prova<0 || nota_prova>10)
                printf("nota invalida\n");
        }while(nota_prova<0 || nota_prova>10);

        media += nota_prova;
    }
    media = media/2;
    return media;
}
