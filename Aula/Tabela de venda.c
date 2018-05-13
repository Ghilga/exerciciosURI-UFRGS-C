#include <stdio.h>
int main ()
{

    int Cod;
    int Valor;
    int Qtd;
    scanf("%d",&Cod);
    scanf("%d",&Valor);
    scanf("%d",&Qtd);
    int Total = Valor * Qtd;
    printf("|=======================================|\n");
    printf("|\t Mercearia do Sr. Teobaldo\t|\n");
    printf("|=======================================|\n");
    printf("|Cod.\tValor\tQtd\tTotal\t\t|\n");
    printf("|%d\tR$%d\t%d\tR$%d\t\t|\n",Cod,Valor,Qtd,Total);
    printf("|=======================================|\n");


    return 0;
}
