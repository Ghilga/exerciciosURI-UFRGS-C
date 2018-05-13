#include <stdio.h>
#include <math.h>
int main()
{
    int V,E;
    E = 350000;
    scanf("%d",&V);
    printf("Numero de estrangeiros por voluntario: %d\n",E/V);
    printf("Numero de voluntarios atendendo um estrangeiro a mais: %d\n",E%V);

    return 0;
}
