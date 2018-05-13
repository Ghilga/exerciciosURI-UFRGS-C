#include <stdio.h>
#include <strings.h>
#define MAXLETRAS 100
#define FRASES 3
int main(){
    int i,j,t,k,soma[2]={0,0};
    char frase[FRASES][MAXLETRAS+1];

    printf("Digite quantas instancias o programa deve analisar: ");
    scanf("%d",&t);
    fflush(stdin);
    for(k=0; k<t; k++){
        printf("Digite a frase correta: \n");
        gets(frase[k]);
        j = strlen(frase[k]);
        for(i=1; i<FRASES; i++){
            printf("Digite a frase do time %d: \n",i);
            gets(frase[i]);
        }
        printf("\nInstancia %d\n",k+1);
        for(i=0; i<j; i++){
            if(frase[k][i] == frase[1][i]){
                soma[0]++;
            }
            if(frase[k][i] == frase[2][i]){
                soma[1]++;
            }
        }
        //checa qual time teve mais letras iguais a da frase original
        if(soma[0] == soma[1])
            printf("empate\n");
        else if(soma[0] > soma[1])
            printf("time 1\n");
        else if(soma[1] > soma[0])
            printf("time 2\n");
        //ve qual time teve o maior numero de letras iguais e da o resultado
    }
    return 0;
}
