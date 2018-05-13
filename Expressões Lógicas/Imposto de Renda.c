#include <stdio.h>
int main()
{
    float renda;
    scanf("%f",&renda);
    if(renda >= 0 && renda <= 2000)                             //sem imposto
        printf("Isento\n");
    else if(renda > 2000 && renda <= 3000){                     //8% de imposto
        renda = (renda-2000)*0.08;
        printf("R$ %.2f\n",renda);
    }
    else if(renda > 3000 && renda <= 4500){                     //18% de imposto
        renda = (renda-3000)*0.18 +80;
        printf("R$ %.2f\n",renda);
    }
    else if(renda > 4500){                                      //28% de imposto
        renda = (renda-4500)*0.28 +350;         //impostos anteriores somados : 80(1000*0.08) + 270(1500*0.18) = 350
        printf("R$ %.2f\n",renda);
    }

}
