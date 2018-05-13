#include <stdio.h>
#define N_ALUNOS 20

typedef struct struct_alunos {
    char nome[100];
    int codigo;                                         //struct dos dados dos alunos
    double notaP1, notaP2, atvPratica, trabFinal;
} aluno_t;

double LeValor();                                       //le o valor de uma nota
double CalculaMedia(double *vet, int nElem);            //calcula a media das 4 notas
void LeAluno(aluno_t *aluno);                           //le os dados de cada aluno
float NotaFinal(aluno_t aluno);                         //calcula a nota final de cada aluno
void exibeNotas(float *notasAlunos, aluno_t *alunos);   //exibe a tabela de notas

int main(){                                             //funcao main
    aluno_t alunos[N_ALUNOS];
    int i;
    float notaF[N_ALUNOS], mediaTurma=0;
    for(i=0; i<N_ALUNOS; i++){
        printf("Aluno %d\n\n",i+1);
        LeAluno(&alunos[i]);
        notaF[i] = NotaFinal(alunos[i]);
        mediaTurma += notaF[i];
        printf("\n");
    }
    mediaTurma /= N_ALUNOS;
    exibeNotas(notaF,alunos);
    return 0;
}

double LeValor(){
    double num;
    do{
    scanf("%lf",&num);
    }while(num<0 || num>10);
    return num;
}

double CalculaMedia(double *vet, int nElem){
    int i;
    double media=0;
    for(i=0; i<nElem; i++){
        media+=vet[i];
    }
    media = media/nElem;
    return media;
}

void LeAluno(aluno_t *aluno){
    printf("Nome: ");
    scanf(" %s",aluno -> nome);
    printf("Codigo: ");
    scanf("%d",&aluno -> codigo);
    printf("Nota P1: ");
    aluno -> notaP1 = LeValor();
    printf("Nota P2: ");
    aluno -> notaP2 = LeValor();
    printf("Nota Atividade Pratica: ");
    aluno -> atvPratica = LeValor();
    printf("Nota Trabalho Final: ");
    aluno -> trabFinal = LeValor();
}

float NotaFinal(aluno_t aluno){
    float mediatotal;
    mediatotal = (0.3*aluno.notaP1) + (0.45*aluno.notaP2) + (0.15*aluno.atvPratica) + (0.10*aluno.trabFinal);
    return mediatotal;
}

void exibeNotas(float *notasAlunos, aluno_t *alunos){
    int cont;
    printf("\n   ");
    for(cont=0; cont<N_ALUNOS; cont++)
        printf("  %s   ",alunos[cont].nome);

    printf("\n");
    printf("COD");
    for(cont=0; cont<N_ALUNOS; cont++)
        printf("|  %d   |",alunos[cont].codigo);

    printf("\n");
    printf("P1 ");
    for(cont=0; cont<N_ALUNOS; cont++)
        printf("| %.2lf |",alunos[cont].notaP1);
    printf("\n");
    printf("P2 ");
    for(cont=0; cont<N_ALUNOS; cont++)
        printf("| %.2lf |",alunos[cont].notaP2);

    printf("\n");
    printf("AP ");
    for(cont=0; cont<N_ALUNOS; cont++)
        printf("| %.2lf |",alunos[cont].atvPratica);

    printf("\n");
    printf("TF ");
    for(cont=0; cont<N_ALUNOS; cont++)
        printf("| %.2lf |",alunos[cont].trabFinal);

    printf("\n");
    printf("NF ");
    for(cont=0; cont<N_ALUNOS; cont++)
        printf("| %.2lf |",notasAlunos[cont]);
    printf("\n");
}
