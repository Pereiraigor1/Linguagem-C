
#include <stdio.h>
#include <string.h>
#include <locale.h>

main(){
	int i,cha = 0;
	char x[30];
	setlocale(LC_ALL,"Portuguese");
	struct pessoal {
		char nome [30];
		char endereco [30];
		int idade;
		float salario;
	};
	struct pessoal funcionario[3];
	
	for (i=0;i<3;i++){
		printf("Digite o nome do funcion�rio: ");
		gets(funcionario[i].nome);
		printf("Digite o endere�o do funcion�rio: ");
		gets(funcionario[i].endereco);
		printf("Digite a idade do funcion�rio: ");
		scanf("%d",&funcionario[i].idade);
		printf("Digite o salario do funcion�rio: ");
		scanf("%f",&funcionario[i].salario);
		fflush(stdin);
	}
		printf("Digite o nome da pessoa procurada: ");
		gets(x);
		for (i=0;i<3;i++){
			if(!strcmp(funcionario[i].nome,x)){
				printf("Informa��es sobre a pessoa procurada:\n ");
				printf("Nome: ");
				puts(funcionario[i].nome);
				printf("Endere�o: ");
				puts(funcionario[i].endereco);
				printf("Idade: %d",funcionario[i].idade);
				printf("Salario: %f",funcionario[i].salario);
				cha = 1;
			}
		}
	if (cha == 0) printf("Pessoa n�o encontrada !");
}
