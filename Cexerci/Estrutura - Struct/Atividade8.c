#include <stdio.h>
#include <string.h>
#include <locale.h>

main (){
	int i,achou=0;
	char x [7];
	setlocale(LC_ALL,"Portuguese");
	struct veiculos {
		char proprietario[50];
		char marca[30];
		char placa[7];
		char modelo[50];
		int ano;
	};
	struct veiculos cadastro[3];
	
	for (i=0;i<3;i++){
		printf("Digite o nome do propriet�rio: ");
		gets(cadastro[i].proprietario);
		printf("Digite a marca do ve�culo: ");
		gets(cadastro[i].marca);
		printf("Digite a placa do ve�culo: ");
		gets(cadastro[i].placa);
		printf("Digite o modelo do ve�culo: ");
		gets(cadastro[i].modelo);
		printf("Digite o ano do ve�culo: ");
		scanf("%d",&cadastro[i].ano);
		fflush(stdin);
	}
	for (i=0;i<3;i++){
		if (cadastro[i].ano >= 2010){
			printf("Propriet�rios: ");
			puts(cadastro[i].proprietario);
			printf("Modelo: ");
			puts(cadastro[i].modelo);
			printf("Marca: ");
			puts(cadastro[i].marca);
		}
	}
		printf("Digite o n�mero da placa: ");
		gets(x);
		for(i=0;i<3;i++){
			if(!strcmp(cadastro[i].placa,x)){
				printf("O nome do propriet�rio da placa: ");
				puts(cadastro[i].proprietario);
				achou = 1;
		}	
	}
		if (achou == 0) printf("Propriet�rio n�o encontrado! ");
}
