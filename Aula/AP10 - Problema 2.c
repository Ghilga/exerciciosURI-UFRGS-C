#include <stdio.h>
float recordes(float *top10[10], float *vencedor){
    float *menor;
    int i,*pos;
    for(i=0; i<10; i++){
        if(*top10[i] < *menor){
            *menor = *top10[i];
            *pos = i;
        }
        if(*vencedor > *menor){
            vencedor = &top10[i];
        }
    }
}

int main(){
    float vencedor1;
    recordes [10] = {6, 8, 7, 7.8, 7.9, 5.4, 5, 4, 6.7,8.1};
    recordes(4.5);
    printf("Menor valor no vetor original: %f\n",*menor);
    printf("Posicao do menor valor: %f\n",*pos);
    printf("Foi realizada a substituicao?");
    return 0;
}
