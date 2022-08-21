#include<stdio.h>
#include<stdlib.h>
main(){
	FILE *num;
	int i=0, n;
	if((num=fopen("t2.txt","w+"))==NULL){
		puts("O arquivo nao pode ser aberto!");
		exit(1);
	}
	do{
		printf("Digite um valor inteiro: ");
		scanf("%d",&n);
		putw(n,num);
		i++;
	}while(i<10);
	rewind(num);
	i=0;
	do{
		n=getw(num);
		printf("%d\n",n);
		i++;
	}while(i<10);
	fclose(num);
}
