
//Escreva um programa para manipular o arquivo matriz.txt contendo duas matrizes quadradas A e B de inteiros da seguinte forma: o primeiro valor do arquivo
//representa o n�mero de linhas e colunas de A e B, e os demais, s�o os elementos
//das matrizes, consideradas no sentido das linhas. Por exemplo, se o conte�do do
//arquivo matriz.txt for 2, 1, 0, 1, 3, 0, 0, -1, 3, ent�o as matrizes ser�o:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	FILE *fp;
	char ch;
	int i,n,a;
	if((fp=fopen("matriz.txt","r+"))==NULL){
		puts("Arquivo inexistente! ");
		exit(1);
	}
	fscanf(fp,"%d",&n);
	printf("A matriz � de ordem %dx%d.\n",n,n);
	
	fseek(fp,2,SEEK_SET);
	ch = gets(fp);	
}
