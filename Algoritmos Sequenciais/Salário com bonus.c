#include <stdio.h>
int main()
{
    char N;
    float S,C;
    scanf("%s",&N);
    scanf("%f%f",&S,&C);
    printf("TOTAL = R$ %.2f\n",S+C*0.15);

    return 0;
}
