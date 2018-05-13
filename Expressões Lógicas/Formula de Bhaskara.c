#include <stdio.h>
#include <math.h>
int main ()
{
    double a,b,c,delta,raiz1,raiz2,raizdelta;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    delta = b*b - 4*a*c;
    raizdelta = sqrt(delta);
    raiz1 = (-b + raizdelta)/(2*a);
    raiz2 = (-b - raizdelta)/(2*a);

    if ((2*a)==0 || delta<0)
        printf("Impossivel calcular\n");
    else
        printf("R1 = %.5lf\nR2 = %.5lf\n",raiz1,raiz2);
    return 0;
}
