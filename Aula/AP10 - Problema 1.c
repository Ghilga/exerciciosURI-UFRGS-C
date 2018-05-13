#include <stdio.h>
int leCoord(int *lin, char *col, int dim){
    *lin=0;
    do{
    printf("Digite a linha: ");
    fflush(stdin);
    scanf("%d",lin);
    }while(*lin < 1 || *lin > dim);
    
    do{
    printf("Digite a coluna:");
    fflush(stdin);
    scanf("%c",col);
    }while(toupper(*col) < 65 || toupper(*col) > 65+dim);
}

int main(){
    int linha;
    char coluna;
    leCoord(&linha,&coluna, 5);
    printf("Linha: %d\n",linha);
    printf("Coluna: %c\n",toupper(coluna));
    return 0;
}
