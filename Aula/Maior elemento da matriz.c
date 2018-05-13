#include <stdio.h>
#define LINHA 2
#define COLUNA 2
int omaior(int matriz[LINHA][COLUNA], int num_lin, int num_col, int *posicao){
    int i,j,maior = matriz[0][0];
    *posicao = 0;
    srand(time(NULL));
    for(i=0; i<num_lin; i++){
        for(j=1; j<num_col; j++){
            matriz[i][j] = rand();
            if(matriz[i][j] > maior)
                maior = matriz[i][j];
                *posicao = i*num_col + j;
        }
    }
    printf("Maior elemento: %d\n",maior);
    printf("Posicao: %d\n",*posicao);
}
int main(){
    omaior(0, 2, 2, 0);

}
