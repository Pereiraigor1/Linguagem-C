#include<stdio.h>
#include<string.h>
main(){
	int i,snl=0;
	char time[20],lista[10][20]={"SANTOS","BARCELONA","JUVENTUS","VASCO","OLYMPIACOS","BAYERN","PAYSANDU","RIO NEGRO","CRICIUMA","REMO"};
	printf("Digite o time: ");
	gets(time);
	for(i=0;i<strlen(time);i++){
		time[i]=toupper(time[i]);
	}
	for(i=0;i<10;i++){
		if(strcmp(time,lista[i])){
		}
		else{
			printf("Time pertence a lista");
			snl++;
		}
	}
	if(snl==0)printf("Time nao pertence a lista");
}
