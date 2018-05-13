// INICIO CODIGO 2
#include<stdio.h>
#define N 4
#define M 31
#define DIST_MAX 999999
void le_nomes(char nomes_cidades[N][M]) {
	int i;
	printf("Digite o nome das cidades:\n");
	for (i=0; i<N; i++)
		fgets(nomes_cidades[i], M, stdin);
}


void le_distancias(int distancias[N][N], char nomes_cidades[N][M]) {
	int i, j;
	for (i=0; i<N; i++) {
		for (j=i+1; j<N; j++) {
			printf("distancia entre %s e %s\n", nomes_cidades[i], nomes_cidades[j]);
			scanf("%d", &distancias[i][j]);
			distancias[j][i] = distancias[i][j]; // assumindo vias de mao dupla
		}
	}
}


void mostra_vizinhos(char nomes[N][M], int dist[N][N], int cid) {
	int viz;


	for (viz=0; viz<N; viz++) {
		if (cid != viz) {
			if (dist[cid][viz])
				printf("Dist %s - %s: %dkm\n", nomes[cid], nomes[viz], dist[cid][viz]);
			else
				printf("sem caminho direto %s - %s\n", nomes[cid], nomes[viz]);
		}
	}
}


int encontra_atalho(int dist[N][N], int orig, int dst) {
	int menor = dist[orig][dst], v, indice;
	indice = dst;
	if (menor == 0)
		menor = DIST_MAX;
	for (v=0; v<N; v++) {
		if (orig != v && dst != v) {
			if (dist[orig][v] && dist[v][dst] && (dist[orig][v]+dist[v][dst] < menor)){
				menor = dist[orig][v]+dist[v][dst];
				indice = v;
			}
		}
	}


	return indice;
}


int main() {
	char nomes[N][M];
	int dist[N][N] = {0}, origem, destino, ind_menor;
	/* Le entrada */
	le_nomes(nomes);
	le_distancias(dist, nomes);
	/* Mostra as distancias de uma cidade I para todas as suas vizinhas */
		for(origem=0; origem<N; origem++){
        printf("%d - %s",origem,nomes[origem]);
	}
	printf("Digite o numero da cidade que quer as distancias:");
	scanf("%d", &origem);
	mostra_vizinhos(nomes, dist, origem);
	/*verifica se e' melhor ir direto de I p/ K, ou passar por um vizinho de I */
	scanf("%d", &destino);
	ind_menor = encontra_atalho(dist, origem, destino);
	if (ind_menor == destino)
		printf("Nenhum vizinho mais perto de %s\n", nomes[destino]);
	else
		printf("Melhor ir a %s passando por %s\n", nomes[destino], nomes[ind_menor]);
	return 0;
}
// FIM CODIGO 2
