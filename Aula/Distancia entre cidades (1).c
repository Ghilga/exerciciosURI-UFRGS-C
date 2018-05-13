// INICIO CODIGO 1
#include<stdio.h>
#define N 4
#define M 31
#define DIST_MAX 999999
int main() {
	char nomes[N][M];
	int dist[N][N] = {0}, i, j, k, menor, ind_menor;


	/* Le entrada */
	// le nomes
	printf("Digite o nome das cidades:\n");
	for (i=0; i<N; i++)
    	fgets(nomes[i], M, stdin);
	// le distancias
	for (i=0; i<N; i++) {
    	for (j=i+1; j<N; j++) {
        	printf("distancia entre %s e %s\n", nomes[i], nomes[j]);
        	scanf("%d", &dist[i][j]);
        	dist[j][i] = dist[i][j]; // assumindo vias de mao dupla
    	}
	}




	/* Mostra as distancias de uma cidade I para todas as suas vizinhas */
	// le indice de uma cidade
	for(i=0; i<N; i++){
        printf("%d - %s",i,nomes[i]);
	}
	printf("Digite o numero da cidade que quer as distancias:");
	scanf("%d", &i);
	printf("distancia entre %s e todas as cidades vizinhas\n", nomes[i]);
	for (j=0; j<N; j++) {
    	if (i != j) {
        	if (dist[i][j])
            	printf("distancia entre %s e %s: %dkm\n", nomes[i], nomes[j], dist[i][j]);
        	else
            	printf("sem caminho direto entre %s e %s\n", nomes[i], nomes[j]);
    	}
	}




	/* verifica se e' melhor ir direto de I p/ K, ou passar por um vizinho de I */
	// le indice de um vizinho da cidade I
	scanf("%d", &k);
	menor = dist[i][k];
	if (menor == 0)
    	menor = DIST_MAX;
	ind_menor = k;
	for (j=0; j<N; j++) {
    	if (i != j && k != j) {
        	if (dist[i][j] && dist[j][k] && (dist[i][j]+dist[j][k] < menor) ) {
            	menor = dist[i][j]+dist[j][k];
            	ind_menor = j;
        	}
    	}
	}
	if (ind_menor == k)
    	printf("Nenhum vizinho mais perto de %s\n", nomes[k]);
	else
    	printf("E' melhor ir a %s passando por %s\n", nomes[k], nomes[ind_menor]);
	return 0;
}
// FIM CODIGO 1

