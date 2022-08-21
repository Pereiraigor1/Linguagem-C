//Faça um programa para consultar o arquivo agenda. Deve-se solicitar o nome a 
//consultar e imprimir na tela o nome, idade e telefone da pessoa. Caso o nome não 
//exista na agenda, mostre a mensagem “Nome não encontrado”.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	struct{
		char nome[30];
		int idade;
		float telefone;
	} agenda[2];
	FILE *fp;
	int i, aux2=0;
	char aux1[30];
	if((fp=fopen("agenda.dat","r+b"))==NULL){
		puts("Erro ao abrir o arquivo !");
		exit(1);
	}
	printf("Digite um nome: ");
	gets(aux1);
	for (i=0;i<2;i++){
		fread(&agenda[i],sizeof(agenda[i]),i,fp);
		if(!strcmp(aux1,agenda[i].nome)){
			printf("Nome: %s.\n",agenda[i].nome);
			printf("Idade: %d.\n",agenda[i].idade);
			printf("Telefone: %.f ",agenda[i].telefone);
			aux2=1;
		}
	}
	if(aux2=0)
		printf("Nome não encontrado.");
	fclose(fp);
}
