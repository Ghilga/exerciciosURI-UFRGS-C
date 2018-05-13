#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MIN 0
#define MAX 5
int coordenada_tabuleiro();

int coordenada_tabuleiro()
{
    srand(time(NULL));
    char tabela[5][5],letra;
    int i,j,linha,coluna;

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            tabela[i][j] = '~';
        }
    }
    for(i=0; i<5; ){
        int a,b;
        a = rand()%5;
        b = rand()%5;
        if(tabela[a][b] == '~'){
            tabela[a][b] = 'S';
            i++;
        }
        else i=i;
    }
    for(i=0; i<5; i++){
            for(j=0; j<5; j++){
                printf("%c ",tabela[i][j]);
            }
            printf("\n");
        }
    scanf("%c%d",&letra,&coluna);
    switch(letra){
        case 'A': linha=0;
            break;
        case 'B': linha=1;
            break;
        case 'C': linha=2;
            break;
        case 'D': linha=3;
            break;
        case 'E': linha=4;
            break;
        default: printf("Erro\n");
    }
    coluna -= 1;
    if(linha<0 || linha>4 || coluna<0 || coluna>4)
        return -1;
    else if(tabela[linha][coluna] == 'S'){
        tabela[linha][coluna] = 'X';
        for(i=0; i<5; i++){
            for(j=0; j<5; j++){
                printf("%c ",tabela[i][j]);
            }
            printf("\n");
        }
        return 1;
    }
    else if(tabela[linha][coluna] != 'S'){
        tabela[linha][coluna] = 'X';
        for(i=0; i<5; i++){
            for(j=0; j<5; j++){
                printf("%c ",tabela[i][j]);
            }
            printf("\n");
        }
        return 0;
    }
}
int main(){
    coordenada_tabuleiro();
}
