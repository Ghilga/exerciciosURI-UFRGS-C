#include <stdio.h>
int main()
{
    int C1,C2,N1,N2;
    float V1,V2;
    scanf("%d%d%f",&C1,&N1,&V1);
    scanf("%d%d%f",&C2,&N2,&V2);
    printf("VALOR A PAGAR: R$ %.2f\n",N1*V1 + N2*V2);

    return 0;
}
