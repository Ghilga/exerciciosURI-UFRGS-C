#include <stdio.h>
#include <math.h>
int main()
{
    int I;
    scanf("%d",&I);
    printf("%d ano(s)\n",I/365);
    printf("%d mes(es)\n",I%365/30);
    printf("%d dia(s)\n",I%365%30);
    return 0;
}
