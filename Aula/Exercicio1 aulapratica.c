#include <stdio.h>
#define MAX_STRLEN 31
#define N 3
int main(){
    FILE *atleta;
    int num_atleta, cont=0;
    typedef struct atleta_st
    {
        char nome[MAX_STRLEN];
        int idade;
        float altura;
    } atleta_t;

    atleta_t dados_atleta;

    if(!(atleta = fopen("arq_atleta.bin","wb"))) // abre para escrita e testa a abertura
        printf("Erro na abertura\n");
    else {
        //for (cont = 0; cont < N; cont++){
        printf("Entre os valores do atleta %d: \n",cont+1);
        printf("Nome: ");
        scanf("%s",&dados_atleta.nome);
        printf("Idade: ");
        scanf("%d",&dados_atleta.idade);
        printf("Altura: ");
        scanf("%f",&dados_atleta.altura);

        if(fwrite(&dados_atleta,sizeof(atleta_t),1,atleta) != 1);
            printf("Erro na leitura!!\n");
        }
        fclose(atleta); // fecha o arquivo
    //}
    return 0;
}
