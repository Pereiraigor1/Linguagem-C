#include <stdio.h>
#include <locale.h>

main(){
	setlocale (LC_ALL,"Portuguese");
	int i,Vet[10];
	for (i=0;i<10;i++){
		printf("Digite 10 n�meros inteiros: ");
		scanf("%d",&Vet[i]);		
	}
	printf("\n");
	for (i=9;0<=i;i--){
		printf("A ordem inversa �: %d\n",Vet[i]);
	
}
}
