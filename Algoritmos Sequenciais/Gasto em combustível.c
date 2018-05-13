#include <stdio.h>
int main()
{
    int T,VM,D;
    scanf("%d",&T);
    scanf("%d",&VM);
    D = T*VM;
    printf("%.3f\n",(float)D/12);

    return 0;
}
