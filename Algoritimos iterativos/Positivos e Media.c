#include <stdio.h>
int main(){
//Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. Na pr�xima linha, deve-se mostrar a m�dia de todos os valores positivos digitados, com um d�gito ap�s o ponto decimal.
//Entrada
//A entrada cont�m 6 n�meros que podem ser valores inteiros ou de ponto flutuante. Pelo menos um destes n�mero ser� positivo.
//Sa�da
//O primeiro valor de sa�da � a quantidade de valores positivos. A pr�xima linha deve mostrar a m�dia dos valores positivos digitados.
    float numero[6],somapos=0,soma=0;
    int i;
    for(i=0; i<6; i++){
        scanf("%f",&numero[i]);
        if(numero[i]> 0){
            soma += numero[i];
            somapos++;
        }
    }
    printf("%d valores positivos\n",(int)somapos);
    printf("%.1f\n",soma/somapos);
    return 0;
}
