#include <stdio.h>
#include <math.h>
int main ()
{
    int HI,HF,S;
    float T1;
    printf("Hora inicial: ");
    scanf("%d",&HI);
    printf("Hora final: ");
    scanf("%d",&HF);
    printf("Salario: ");
    scanf("%d",&S);
    if(HF<HI){
        T1 = (HF+24)-(HI-24)-24;
        printf("O seu turno durou %d horas.\n",(int)T1);
        }
    if((HF>HI)||(HI==12&&HF>HI)){
        T1 = HF-HI;
        printf("O seu turno durou %d horas.\n",(int)T1);
        }
    if(HI==HF)
        printf("O seu turno durou 24 horas.\n");
    if(T1<8)
        printf("Atencao! Voce nao cumpriu a carga horaria de 8 horas!\n");
    if(T1>8)
        printf("Voce trabalhou %d hora(s) extra(s) e recebeu um bonus de R$%.2f\n",(int)T1-8,S*0.015*(T1-8));
    return 0;
}
