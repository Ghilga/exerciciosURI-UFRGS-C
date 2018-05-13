#include <stdio.h>
#define MAX 1000
int main()
{
    int i,j,num;
    int posmenor,aux;
    int vetor[MAX];
    printf("Digite quantos numeros voce quer ordenar: ");
    scanf("%d",&num);
    printf("Digite os numeros:\n");
    for(i=0; i < num; i++){
    scanf("%d",&vetor[i]);
    }
    for(i=0; i < (num-1); i++){
        posmenor = i;
        for(j=i+1; j<num; j++)
            if(vetor[posmenor] > vetor[j]){
                posmenor = j;
            }
        aux = vetor[i];
        vetor[i] = vetor[posmenor];
        vetor[posmenor] = aux;
    }
    for(i=0; i < num; i++){
        printf("Posicao %d: %d\n",i,vetor[i]);
    }
    return 0;
}
