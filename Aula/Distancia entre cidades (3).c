// INICIO CODIGO 3
#include<stdio.h>
#define N 4
#define M 31
#define DIST_MAX 999999
struct cidade_st {
	char nome[M];
	int vizinho[N];
};
typedef struct cidade_st cidade_t;


struct par_st {
	int o;
	int d;
};
typedef struct par_st par_t;


void le_nomes(cidade_t vet_cid[N]) {
	int i;
	for (i=0; i<N; i++)
		fgets(vet_cid[i].nome, M, stdin);
}


void le_distancias(cidade_t *vet_cid) {
	int i, j;
for (i=0; i<N; i++) {
		for (j=i+1; j<N; j++) {
			printf("distancia entre %s e %s\n", vet_cid[i].nome, vet_cid[j].nome);
			scanf("%d", &(vet_cid[i].vizinho[j]));
			vet_cid[j].vizinho[i] = vet_cid[i].vizinho[j]; // vias de mao dupla
		}
	}
}


void mostra_vizinhos(cidade_t *vet_cid, int c) {
	int v;


	for (v=0; v<N; v++) {
		if (c != v) {
			if (vet_cid[c].vizinho[v])
				printf("Dist %s - %s: %dkm\n", vet_cid[c].nome, vet_cid[v].nome, vet_cid[c].vizinho[v]);
			else
				printf("sem caminho direto %s - %s\n", vet_cid[c].nome, vet_cid[v].nome);
		}
	}
}




int encontra_atalho(cidade_t *vet_cid, int orig, int dst) {
	int menor = vet_cid[orig].vizinho[dst], v, indice;
	indice = dst;
	if (menor == 0)
		menor = DIST_MAX;
	for (v=0; v<N; v++) {
		if (orig != v && dst != v) {
			if ( vet_cid[orig].vizinho[v] && vet_cid[v].vizinho[dst] &&
(vet_cid[orig].vizinho[v]+vet_cid[v].vizinho[dst] < menor)){
				menor = vet_cid[orig].vizinho[v]+vet_cid[v].vizinho[dst];
				indice = v;
			}
		}
	}
	return indice;
}


void le_caminho(par_t *caminho) {
	scanf("%d %d", &(caminho->o), &(caminho->d));
}


int main() {
	cidade_t cidades[N] = { {0}, {0} };
	int ind_menor;
par_t caminho;
	/* Le entrada */
	le_nomes(cidades);
	le_distancias(cidades);
	/* Mostra as distancias de uma cidade I para todas as suas vizinhas */
le_caminho(&caminho);
	mostra_vizinhos(cidades, caminho.o);
	/*verifica se e' melhor ir direto de I p/ K, ou passar por um vizinho de I */
	ind_menor = encontra_atalho(cidades, caminho.o, caminho.d);
	if (ind_menor == caminho.d)
		printf("Nenhum vizinho mais perto de %s\n", cidades[caminho.d].nome);
	else
		printf("Melhor ir a %s passando por %s\n", cidades[caminho.d].nome, cidades[ind_menor].nome);
	return 0;
}
// FIM CODIGO 3
