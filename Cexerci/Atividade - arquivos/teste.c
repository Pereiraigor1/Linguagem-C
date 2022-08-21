

// Faça um programa para gravar em arquivo informações de uma turma contendo nome e nota de 10 alunos. Em seguida, leia e mostre o conteúdo do arquivo.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	struct {
		char nome[30];
		float nota;
	} aluno[2];
	char aux[2];
	int i;
	FILE *fp;
	if(fp=fopen("turma.txt", "wb")==NULL){
		puts("Erro ao abrir o arquivo!!");
		exit(1);
	}
	for (i=0;i<3;i++){
		printf("\nInforme o nome do aluno: ");
		gets(aluno[i].nome);
		printf("Informe a nota do aluno: ");
		gets(aux);
		aluno[i].nota = atof(aux);
	}
	for (i=0;i<3;i++) fwrite(&aluno[i],sizeof(aluno[i]),1,fp);
	fclose(fp);
	fp=fopen("turma.txt", "rb");
	for (i=0;i<3;i++){
		if(fread(&aluno[i],sizeof(aluno[i]),1,fp)==1){
			printf("\nAluno: %s",aluno[i].nome);
			printf("\nNota: %f",aluno[i].nota);
		}
	}
	fclose(fp);
	return 0;
}
