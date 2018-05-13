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
    for(i=1; i < num; i++){
        aux = vetor[i];
        j = i-1;
        while(j>=0 && aux < vetor[j]){
            vetor[j+1] = vetor[j];
            j--;
        }
        vetor[j+1] = aux;
    }
    for(i=0; i < num; i++){
        printf("Posicao %d: %d\n",i,vetor[i]);
    }
    return 0;
}
