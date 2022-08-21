#include<stdio.h>
#include<string.h>
main(){
	int i,maior=0;
	char lista[10][50];
	printf("Digite 10 palavras:\n");
	for(i=0;i<10;i++){
		gets(lista[i]);
	}
	for(i=0;i<10;i++){
		if(strlen(lista[i])>strlen(lista[maior]))maior=i;
	}
	printf("A maior STRING: %s\n",lista[maior]);
}
