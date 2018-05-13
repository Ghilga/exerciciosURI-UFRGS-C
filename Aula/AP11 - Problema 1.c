#include <stdio.h>
#include <math.h>
#define MAX_JOGADORES 5

typedef struct dados_jogador {
    char nome[21];
    float pontuacao;
    float tempo;
} dados;

dados struct_jogador;
dados calcula_dados();
void resultados(dados*);

int main(){
    dados vet[MAX_JOGADORES];
    for(int i=0; i<MAX_JOGADORES; i++){
        printf("Digite os dados do jogador %d:\n",i+1);
        vet[i] = calcula_dados();
    }
    resultados(vet);
}

void resultados(dados *vet){
    float media_tempo = 0;
    for(int i=0; i<MAX_JOGADORES; i++)
    {
        media_tempo += vet[i].tempo;
    }
    media_tempo /= MAX_JOGADORES;
    float minutos = floor(media_tempo);
    float segundos = (media_tempo - floor(media_tempo))*60;
    printf("A media de tempo de jogo foi %.1f: %.0f minuto(s) e %.0f segundo(s).\n\n",media_tempo,minutos,segundos);
    printf("Jogadores com tempo abaixo da media:\n");
    for(int i=0; i<MAX_JOGADORES; i++){
        if(vet[i].tempo < media_tempo){
            printf("\n- %s\n",vet[i].nome);
            printf("Pontuacao: %.2f\n",vet[i].pontuacao);
            printf("Tempo: %.0f minuto(s)\n",floor(vet[i].tempo));
        }
    }
}

dados calcula_dados(){
    scanf("%s %f %f",&struct_jogador.nome, &struct_jogador.pontuacao, &struct_jogador.tempo);
    fflush(stdin);
    printf("\n");
    return struct_jogador;
}
