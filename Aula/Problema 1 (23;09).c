#include <stdio.h>
#define PROGRAMA 3
#define BIMESTRE 3
int main()
{
    int prog_bim[BIMESTRE][PROGRAMA],soma=0,maiornum=0;              //vetor matriz de programa por bimestre
    int i,j;                                            //contadores
    float mediatot,media;
    for(i=0; i<PROGRAMA; i++){
        printf("Programa %d\n",i+1);
        for(j=0; j<BIMESTRE; j++){
            scanf("%d",&prog_bim[i][j]);
            soma += prog_bim[i][j];
        }
        mediatot = (float)soma/(PROGRAMA*BIMESTRE);     //tarefa a) media dos 12 meses.
    }
    printf("\n");
    printf("Media por bimestre: %.2f\n",mediatot);
    printf("\n");
    for(j=0; j<BIMESTRE; j++){                          //tarefa b) guarda o programa com maior numero de publicacoes em maiornum.
        soma=0;
        for(i=0; i<PROGRAMA; i++){
            soma += prog_bim[i][j];
        }
        printf("soma do bimestre %d %d\n",j,soma);
        if(soma > maiornum){
                maiornum = j+1;
        }
    }
    printf("Bimestre com o maior numero de publicacoes: %d\n",maiornum);
    printf("\n");
    printf("PPGs com media de publicacoes acima da media geral: ");
    for(i=0; i<PROGRAMA; i++){                          //tarefa c) checa se a media do programa foi maior que a media geral e imprime o valor, caso seja.
        soma=0;
        for(j=0; j<BIMESTRE; j++){
            soma += prog_bim[i][j];
        }
        if(soma/BIMESTRE > mediatot){
            printf("%d ",i+1);
        }
    }
    printf("\n");
    return 0;
}
