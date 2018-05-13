#include <stdio.h>
#include <math.h>
int main()
{
    float R,H,Q,P,cap;
    scanf("%f%f%f%f",&R,&H,&Q,&P);
    cap = 3.1415*R*R*H*Q;
    printf("Capacidade: %.2f\n",cap);
    if(cap>(P*1000))
        printf("Eh suficiente!\n");
    else
        printf("Nao eh suficiente!\n");
    return 0;
}
