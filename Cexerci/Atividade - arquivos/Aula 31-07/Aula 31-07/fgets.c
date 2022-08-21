#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	FILE *arq;
	char str[80];
	if((arq=fopen("teste.txt","a+"))==NULL){
		puts("O arquivo não pode ser aberto!");
		exit(1);
	}
	do{
		printf("Digite a string(apenas enter para terminar):");
		gets(str);
		strcat(str,"\n");
		fputs(str,arq);
	}while(*str!='\n');
	rewind(arq);
	while(!feof(arq)){
		fgets(str,79,arq);
		printf(str);
	}
	fclose(arq);
	return 0;
}
