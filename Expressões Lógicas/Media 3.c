#include <stdio.h>
int main()
{
    float nota1,nota2,nota3,nota4,media,exame;
    scanf("%f %f %f %f",&nota1,&nota2,&nota3,&nota4);   //notas das 4 provas
    media= (nota1*2 + nota2*3 + nota3*4 + nota4)/10;    //media das 4 notas do aluno
    printf("Media: %.1f\n",media);
    if(media >= 7.0)
        printf("Aluno aprovado.\n");
    else if(media < 5.0)
        printf("Aluno reprovado.\n");
    else if(media >= 5.0 && media < 7.0)
    {
        printf("Aluno em exame.\n");
        scanf("%f",&exame);
        printf("Nota do exame: %.1f\n",exame);
        media = (media + exame)/2;                       //media da nota do exame + a media anterior caso o aluno esteja em exame
        if(media >= 5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n",media);
        }
        else if(media < 5.0){
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n",media);
        }
    }
    return 0;
}
