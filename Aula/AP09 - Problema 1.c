#include <stdio.h>

void menu();
char leOpcao();

int main() {
    char op;
    char filename[100];
    menu();
    op = leOpcao();
    switch(op) {
        case 'i':
        case 'I': printf("Iniciando um novo jogo!!\n");
            break;
        case 'c':
        case 'C': printf("Digite o nome do arquivo com o jogo a carregar: ");
            scanf("%s",filename);
            printf("Carregando o jogo salvo no arquivo %s!\n",filename);
            break;
        case 'r':
        case 'R': printf("Regras do Jogo Batalha Naval..\n");
            break;
        case 'p':
        case 'P': printf("Buscando os recordes registrados...\n");
            break;
        case 's':
        case 'S': printf("Ateh mais!!\n");
            break;
        default: printf("Opcao invalida!!\n");
    }
    return 0;
}

void menu(){
    printf("\n\n\tB A T A L H A\n");
    printf("\t  N A V A L\n\n");
    printf("[I] Iniciar um novo jogo\n");
    printf("[C] Carregar um jogo\n");
    printf("[R] Regras do jogo\n");
    printf("[P] Melhores pontuacoes (recordes)\n");
    printf("[S] Sair\n");
}

char leOpcao(){
    char opcao;
    opcao = getchar();
}
