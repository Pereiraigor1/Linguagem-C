
#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i,Vet[10],a;
	
	for (i=0;i<10;i++){
		printf("Digite os valores do vetor C: ");
		scanf("%d",&Vet[i]);
}		
		printf("Digite um valor para verificar se est� no vetor : ");
		scanf("%d",&a);
	for (i=0;i<10;i++){
		if (Vet[i] == a) {
			printf("O Valor %d est� no vetor.",a);
			break;
		}
		else {
			printf("O valor %d n�o se encontra no vetor.",a);
			break;
}
}
}

