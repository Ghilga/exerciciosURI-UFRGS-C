#include <stdio.h>
int main(){
//Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.
//Entrada
//A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante. Pelo menos um destes número será positivo.
//Saída
//O primeiro valor de saída é a quantidade de valores positivos. A próxima linha deve mostrar a média dos valores positivos digitados.
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
