#include <stdio.h>
#define JOGADORES 5

typedef	struct struct_jogador
{
char	nome[20];
int	    posRanking;
float	pontuacao;
}	jogador;
jogador func_leDados();
void atualiza_pontuacao(jogador* ,float);
void mostra_jogadores(jogador*);

int main(){
    FILE* arq_jogadores;
    int i;
    char nome_jogador[20];
    float nova_pontuacao;
    jogador dados_jogador[JOGADORES];
    for(i=0; i<JOGADORES; i++){
        printf("Jogador %d\n",i+1);
        dados_jogador[i] = func_leDados();
    }
    if(!(arq_jogadores = fopen("Ranking_jogadores.bin","wb")))
        printf("Erro na abertura!\n");
    if((fwrite(&dados_jogador[JOGADORES],sizeof(dados_jogador[JOGADORES]),1,arq_jogadores)) != 1)
        printf("Erro na escrita!\n");
    fclose(arq_jogadores);
    printf("Digite o nome do jogador e sua pontuacao na ultima rodada:\n");
    scanf("%s",nome_jogador);
    scanf("%f",&nova_pontuacao);
    if(!(arq_jogadores = fopen("Ranking_jogadores.bin","rb")))
        printf("Erro na abertura!\n");
    for(i=0; i<JOGADORES; i++){
        if(strcmp(nome_jogador,dados_jogador[i].nome) == 0 ){
            if(!(arq_jogadores = fopen("Ranking_jogadores.bin","wb")))
                printf("Erro na abertura!\n");

            atualiza_pontuacao(&dados_jogador[i], nova_pontuacao);
            mostra_jogadores(dados_jogador);

            if((fwrite(&dados_jogador[JOGADORES],sizeof(dados_jogador[JOGADORES]),1,arq_jogadores)) != 1)
                printf("Erro na escrita!\n");
            fclose(arq_jogadores);

        }
    }
    fclose(arq_jogadores);
    return 0;
}

jogador func_leDados(){
    jogador dados;
    printf("Digite o nome: ");
    scanf("%s",&dados.nome);
    printf("Digite a posicao no ranking: ");
    scanf("%d",&dados.posRanking);
    printf("Digite a pontuacao: ");
    scanf("%f",&dados.pontuacao);
    return dados;
}

void atualiza_pontuacao(jogador *dados_jogador, float nova_pontuacao){
    printf("%s: ",(dados_jogador -> nome));
    dados_jogador -> pontuacao += nova_pontuacao;
    printf("%.2f\n",dados_jogador -> pontuacao);
}

void mostra_jogadores(jogador *dados_jogador){
    int i;
    for(i=0; i<JOGADORES; i++){
    printf("\nJogador %d:\n",i+1);
    printf("Nome: %s\n",dados_jogador[i].nome);
    printf("Posicao no Ranking: %d\n",dados_jogador[i].posRanking);
    printf("Pontuacao: %.2f\n",dados_jogador[i].pontuacao);
    }
}

