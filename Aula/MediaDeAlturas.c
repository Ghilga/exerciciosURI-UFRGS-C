#include <stdio.h>
#define MAXPESSOAS 200
int main()
{
    int numpessoas,i;
    float altura[MAXPESSOAS],media,soma=0;
    printf("Digite o numero de pessoas: \n");
    scanf("%d",&numpessoas);
    for(i=0; i < numpessoas; i++){                                //calcula a media das alturas
        printf("Digite a altura da pessoa (em centimetros): \n");
        scanf("%f",&altura[i]);
        soma +=altura[i];
    }
    media = soma/numpessoas;
    printf("Media das alturas: %.2f\n\n",media);
    printf("Alturas acima da media: \n");
    for(i=0; i<numpessoas; i++){
        if(altura[i] > media){                                   //calcula quais alturas sao acima da media
            printf("%.2f\n",altura[i]);
        }
    }
    printf("Alturas abaixo da media: \n");
    for(i=0; i<numpessoas; i++){
        if(altura[i] < media){                            //calcula quais alturas sao abaixo da media
            printf("%.2f\n",altura[i]);
        }
    }
}
