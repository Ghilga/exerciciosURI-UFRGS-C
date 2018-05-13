#include <stdio.h>
#include <math.h>
int main()
{
    float O,P;
    float L;
    float C;
    scanf("%f",&O);
    scanf("%f",&P);
    L = O/P;
    C = 150*L/8.16;
    printf("Numero de latas compradas com orcamento informado: %d\n",(int)L);
    printf("Numero de colunas pintadas com este valor: %d\n",(int)C);
    printf("Custo para revitalizar todas as colunas: %.2f\n",(4651.2/150)*P);

    return 0;
}
//O = Orçamento    P = Preço    L = Latas   C = Colunas
//Coluna = 2,04m²   Tinta = 150m²
