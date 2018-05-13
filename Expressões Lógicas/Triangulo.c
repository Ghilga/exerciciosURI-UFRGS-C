#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c;                                                            //a,b e c = lados do triangulo ou do trapezio
    scanf("%f%f%f",&a,&b,&c);
    if(a< (b+c) && c < (b+a) && b < (a+c))                                  //condicao para ser um triangulo
        printf("Perimetro = %.1f\n",a+b+c);
    else                                                                    //caso nao seja triangulo, é um trapezio
        printf("Area = %.1f\n",(a+b)*c/2);
    return 0;
}
