#include<stdio.h>
#include<string.h>
main(){
	FILE *fp;
	if((fp=fopen("ficha.txt","w+"))==NULL){
		printf("Este arquivo nao pode ser aberto!");
		exit(1);
	}
	int i,idade;
	char nome[100];
	for(i=0;i<5;i++){
		scanf("%s %d",&nome,&idade);
		fprintf(fp,"%s %d",nome,idade);
	}
	rewind(fp);
	for(i=0;i<5;i++){
		fscanf(fp,"%s %d",&nome,&idade);
		printf("%s %d\n",nome,idade);
	}
}
