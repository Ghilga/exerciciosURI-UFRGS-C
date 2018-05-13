#include <stdio.h>
#define TAMANHO 3
int main(){
    int i,j,posmenor;                //controladores e variaveis de troca
    double lado[TAMANHO],aux,a,b,c;
    for(i=0; i < TAMANHO; i++){
        do{
            scanf("%lf",&lado[i]);
        }while(lado[i]<0);
    }
    for(i=0; i < TAMANHO-1; i++){
        posmenor = i;
        for(j = i+1; j<TAMANHO; j++){
            if(lado[i] < lado[j]){
                posmenor = j;
            }
        }
        aux = lado[i];
        lado[i] = lado[posmenor];
        lado[posmenor] = aux;
    }
    a = lado[0];
    b = lado[1];
    c = lado[2];
    if(a >= b+c){
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    else {if(a*a == (b*b + c*c)){
        printf("TRIANGULO RETANGULO\n");
    }
    if(a*a > b*b + c*c){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if(a*a < b*b + c*c){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a == b && b == c && a == c){
        printf("TRIANGULO EQUILATERO\n");
    }
    if((a == b && a != c) || (c == b && c != a) || (c == b && c != a)){
        printf("TRIANGULO ISOSCELES\n");
    }
    }
    return 0;
}
