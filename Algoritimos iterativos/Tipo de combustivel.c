#include <stdio.h>
int main(){
    int numCombust, alcool=0, gasolina=0, diesel=0;
    do{
        scanf("%d",&numCombust);
        switch(numCombust){
            case 1: alcool++;
            break;
            case 2: gasolina++;
            break;
            case 3: diesel++;
            break;
        }
    }while(numCombust != 4);
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",alcool);
    printf("Gasolina: %d\n",gasolina);
    printf("Diesel: %d\n",diesel);
}
