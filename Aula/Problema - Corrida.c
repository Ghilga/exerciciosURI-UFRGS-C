#include <stdio.h>
int main ()
{
    float M1,M2,S,KM;
    printf("Passos no primeiro minuto: ");
    scanf("%f",&M1);
    printf("Passos no ultimo minuto: ");
    scanf("%f",&M2);
    printf("Tempo total: ");
    scanf("%f",&S);
    KM = (((M1*0.0007/60) + (M2*0.0007/60))/2)*S;
    printf("Km: %.3f",KM);

    return 0;
}
