
#include <stdio.h>
#include <locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int limiteinf,limitesup,i;
	printf("Digite o limite inferior: ");
	scanf("%d",&limiteinf);
	printf("Digite o limite superior: ");
	scanf("%d",&limitesup);
	printf("Os n�meros pares s�o :\n");
	for (i=limiteinf;i<=limitesup;i++){
		if (i % 2==0) printf("%d\n",i);	
}
}
