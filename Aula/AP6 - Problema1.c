#include <stdio.h>
#define ALUNOS 30
int main()
{
    int i,aluno[ALUNOS];
    float mediaf[ALUNOS],p1[ALUNOS],p2[ALUNOS],ap,tf,mediag,p1maior[1],p2maior[1];            //media final, prova 1, prova 2, atividades praticas, trabalho final, media geral, maior nota da p1, maior nota da p2
    for(i=0 ;i < ALUNOS; i++){
        do{
            printf("Digite a nota da Prova 1:\n");
            scanf("%f",&p1[i]);
        } while(p1[i]<0 || p1[i]>10);
        do{
            printf("Digite a nota da Prova 2:\n");
            scanf("%f",&p2[i]);
        } while(p2[i]<0 || p2[i]>10);
        do{
            printf("Digite a nota das Atividades Praticas:\n");
            scanf("%f",&ap);
        } while(ap<0 || ap>10);
        do{
            printf("Digite a nota do Trabalho Final:\n");
            scanf("%f",&tf);
        } while(tf<0 || tf>10);

        mediaf[i] = (0.3*p1[i]) + (0.45*p2[i]) + (0.15*ap) + (0.10*tf);
        mediag += mediaf[i];
        printf("|    Aluno    |   P1     |    P2    |   AP     |   TF     |   M     |\n");             //tarefa a.
        printf("|   %d    |  %.2f   |  %.2f   |  %.2f   |  %.2f   |  %.2f   |\n\n",i+201600,p1[i],p2[i],ap,tf,mediaf[i]);
        if(p1[i] > p1maior[0])
            p1maior[0] = p1[i];
        if(p2[i] > p2maior[0])
            p2maior[0] = p2[i];
    }
    mediag = mediag/ALUNOS;
    printf("Media geral da turma: %.2f\n\n",mediag);        //tarefa b.
    printf("Notas maiores que a media da turma:\n\n");
    for(i=0 ;i < ALUNOS; i++){                           //tarefa c.
        if(mediaf[i] > mediag)
            printf("Matricula: %d   Media final: %.2f\n\n",i+201600,mediaf[i]);
    }
    for(i=0 ;i < ALUNOS; i++){                           //maior nota da prova 1
        if(p1[i] == p1maior[0])
            printf("Maior nota da prova 1: %.2f     Aluno(Matricula): %d\n\n",p1maior[0],i+201600);                     //tarefa d.
    }
    for(i=0 ;i < ALUNOS; i++){                           //maior nota da prova 2
        if(p2[i] == p2maior[0])
            printf("Maior nota da prova 2: %.2f     Aluno(Matricula): %d\n\n",p2maior[0],i+201600);
    }
    return 0;
}
