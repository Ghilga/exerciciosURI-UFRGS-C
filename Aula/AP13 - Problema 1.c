#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

FILE* arq_imobiliaria;
typedef struct dadosImovel_st{
    int codigo;
    char proprietario[30];
    float valor;
    char disponibilidade;
} dados_imovel;

//funcao para imprimir o menu de opcoes
void imprimeMenu() {
	int i;

	for (i=0;i<35;i++)
		printf("*");

	printf("\n##  IMOBILIARIA - MENU PRINCIPAL ## \n");

	printf("Selecione a opcao desejada:\n1-Cadastrar imovel\n2-Registrar venda\n3-Calcular comissao\n4-Sair\n");

	 for (i=0;i<35;i++)
                printf("*");
	printf("\n\n\n");

}
//funcao que le os dados dos imoveis
void leDados(FILE *arq_imobiliaria,dados_imovel* imovel){
    if(!(arq_imobiliaria = fopen("Imobiliaria.txt","a")))
        printf("Erro na abertura!!\n");
    //le os dados do imovel
    //dados_imovel imovel;
    printf("Codigo do imovel: ");
    scanf("%d",&imovel -> codigo);
    printf("Proprietario: ");
    scanf("%s",&imovel -> proprietario);
    printf("Valor: ");
    scanf("%f",&imovel -> valor);
    printf("Disponibilidade (D ou N): ");
    scanf(" %c",&imovel -> disponibilidade);

    //Grava os dados no arquivo de texto
    fprintf(arq_imobiliaria, "%d;",(imovel -> codigo));
    fprintf(arq_imobiliaria,"%s;",(imovel -> proprietario));
    fprintf(arq_imobiliaria,"%.2f;",(imovel -> valor));
    fprintf(arq_imobiliaria,"%c\n",(toupper(imovel -> disponibilidade)));
    fclose(arq_imobiliaria);
}
//funcao main
int main() {
    char lido;
	int op,i=0;
	int cod,codTxt,tamanho;
	dados_imovel varImovel[200];
	do{
		imprimeMenu();
		printf("Opcao: ");
		scanf("%d",&op);

		switch(op) {
			case 1:
				printf("Opcao selecionada: 1-Cadastrar imovel\n\n");
                leDados(arq_imobiliaria, &varImovel[i]);
                i++;
				break;

			case 2:
                                printf("Opcao selecionada: 2-Registrar de venda\n\n");
                                printf("Digite o codigo do produto desejado: ");
                                scanf("%d",&cod);
                                arq_imobiliaria = fopen("Imobiliaria.txt","r+");
                                if(arq_imobiliaria == NULL)
                                    printf("Erro na abertura!!\n");
                                else{
                                    i=1;
                                    rewind(arq_imobiliaria);
                                    while(!feof(arq_imobiliaria)){
                                        lido = fgetc(arq_imobiliaria);
                                        if(lido == "\n")
                                            i++;
                                        fscanf(arq_imobiliaria,"%d",&codTxt);
                                        printf("%d\n\n",codTxt);
                                        if(cod == codTxt){
                                            fseek(arq_imobiliaria,i*sizeof(varImovel),SEEK_SET);
                                            break;
                                            putc('V',arq_imobiliaria);
                                        }
                                    }
                                    fclose(arq_imobiliaria);
                                }
                                break;
			case 3:
                                printf("Opcao selecionada: 3-Calcular Comissao\n\n");

                                break;
			case 4:
                                printf("Opcao selecionada: 4-Sair\n\n");
				printf("Saindo do sistema...\n");
                                break;
            /*case 5:
                                arq_imobiliaria = fopen("Imobiliaria.txt","r");
                                if(arq_imobiliaria == NULL)
                                    printf("erro");
                                else{
                                    while((fscanf(arq_imobiliaria,"%d;%s;%f;%c",&varImovel.codigo,varImovel.proprietario,&varImovel.valor,&varImovel.disponibilidade))!=EOF){
                                        printf("%d;%s;%.2f;%c\n\n\n",varImovel.codigo,varImovel.proprietario,varImovel.valor,varImovel.disponibilidade);
                                    }
                                    fclose(arq_imobiliaria);
                                }
                                break;
            */
			default:
				printf("Por favor, selecione uma opcao valida\n\n");
		}
	}while(op!=4);

	return 0;
}
