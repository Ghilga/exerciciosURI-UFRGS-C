#include <stdio.h>
int main(){
    int i,j,posx,posy,posxfinal,posyfinal;
    char movimento;
    scanf("%d",&posx);
    scanf("%d",&posy);
    posxfinal = posx;
    posyfinal = posy;
    do{
        scanf("%c",&movimento);
        switch(movimento){
            case 'v': posyfinal++;
            break;
            case '^': posyfinal--;
            break;
            case '>': posxfinal++;
            break;
            case '<': posxfinal--;
            break;
            default:;
            break;
            }
        }while(movimento != 'x');
        printf("**********\n");
    for(i=1; i<9; i++){
        for(j=0; j<10; j++){
            if(j == 0)
                printf("*");
            else if(j == 9)
                printf("*\n");
            else if(posy == i && posx == j)
                printf("o");
            else if(posyfinal == i && posxfinal == j)
                printf("x");
            else printf(" ");
        }
    }
    printf("**********\n");
    return 0;
}
