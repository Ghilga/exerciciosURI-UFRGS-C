#include <stdio.h>
int main()
{
    float salario;
    char porcento = '%';
    scanf("%f",&salario);
    if(0 < salario && salario <= 400){
        printf("Novo salario: %.2f\n",salario*1.15);
        printf("Reajuste ganho: %.2f\n",(salario*1.15 - salario));
        printf("Em percentual: 15 %c\n",porcento);
    }
    if(400 < salario && salario <= 800){
        printf("Novo salario: %.2f\n",salario*1.12);
        printf("Reajuste ganho: %.2f\n",(salario*1.12 - salario));
        printf("Em percentual: 12 %c\n",porcento);
    }
    if(800 < salario && salario <= 1200){
        printf("Novo salario: %.2f\n",salario*1.10);
        printf("Reajuste ganho: %.2f\n",(salario*1.10 - salario));
        printf("Em percentual: 10 %c\n",porcento);
    }
    if(1200 < salario && salario <= 2000){
        printf("Novo salario: %.2f\n",salario*1.07);
        printf("Reajuste ganho: %.2f\n",(salario*1.07 - salario));
        printf("Em percentual: 7 %c\n",porcento);
    }
    if(salario > 2000){
        printf("Novo salario: %.2f\n",salario*1.04);
        printf("Reajuste ganho: %.2f\n",(salario*1.04 - salario));
        printf("Em percentual: 4 %c\n",porcento);
    }
    return 0;
}
