//Nome: Igor Rafael da Silva Pereira

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	struct {
		char nome[50];
		int conta;
		float saldo;
	} cliente;
	FILE *fp;
	int i,a;
	if((fp=fopen("conta.dat","r+b"))==NULL){
		puts("Erro ao abrir arquivo!!");
		exit(1);
	}
	fseek(fp,0,SEEK_END);
	a= ftell(fp)/sizeof(cliente);
	printf("Quantidades de estruturas: %d",a);
	rewind(fp);
	for(i=4;i<5;i++){
		fseek(fp,i*sizeof(cliente),SEEK_SET);
			if(fread(&cliente,sizeof(cliente),1,fp)==1){
				printf("\nNome: %s ",cliente.nome);
				printf("Conta: %d ",cliente.conta);
				printf("Saldo: %.f",cliente.saldo);
			}
	}
	rewind(fp);
	for(i=11;i<12;i++){
		fseek(fp,i*sizeof(cliente),SEEK_SET);
			if(fread(&cliente,sizeof(cliente),1,fp)==1){
				printf("\nNome: %s ",cliente.nome);
				printf("Conta: %d ",cliente.conta);
				printf("Saldo: %.f",cliente.saldo);
			}
	}
	fclose(fp);
	return 0;
}
