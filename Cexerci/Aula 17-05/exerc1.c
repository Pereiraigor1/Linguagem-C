#include<stdio.h>
#include<string.h>
main(){
	int mes;
	char meses[12][20]={"JANEIRO","FEVEREIRO","MARCO","ABRIL","MAIO","JUNHO","JULHO","AGOSTO","SETEMBRO","OUTUBRO","NOVEMBRO","DEZEMBRO"};
	printf("MESES\nDigite uma valor entre 1 e 12:\n");
	scanf("%d",&mes);
	puts(meses[mes-1]);
}
