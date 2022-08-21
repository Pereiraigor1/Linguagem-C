
// Faça um programa para gravar em arquivo informações de uma turma contendo nome e nota de 10 alunos. Em seguida, leia e mostre o conteúdo do arquivo.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	struct{
		char nome[30];
		float nota;
	}aluno[10];
	char variavel[10];
	int i;
	
	FILE *fp;	
	if((fp=fopen("turma.txt","wb"))==NULL){
		puts("Arquivo inválido! ");
		exit(1);
	}
	for (i=0;i<11;i++){
		printf("Digite o nome do aluno: ");
		gets(aluno[i].nome);
		printf("Digite a nota do aluno: ");
		gets(variavel);
		aluno[i].nota = atof (variavel);
	}	
	for (i=0;i<11;i++) fwrite(&aluno[i],sizeof(aluno[i]),1,fp);
	fclose(fp);
	
	fp=fopen("turma.txt", "rb");
	
	for (i=0;i<11;i++){
		if(fread(&aluno[i],sizeof(aluno[i]),1,fp)==1){
			printf("\n Aluno: %s ",aluno[i].nome);
			printf(" Nota: %f ",aluno[i].nota);
		}
	}
	fclose(fp);
	return 0;
}

		
