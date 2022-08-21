#include <stdio.h>
#include <math.h>
#include <locale.h>
// Igor Rafael da Silva Pereira
main(){
	setlocale(LC_ALL,"Portuguese");
	int Vet[10],i,razao,achou=0;
	for (i=0;i<10;i++){
		printf("Digite os termos da PA: ");
		scanf("%d",&Vet[i]);
	}
	razao = Vet[1] - Vet[0];
	for (i=0;i<9;i++){
		if (Vet[i]+razao==Vet[i+1]){
			achou = 1;
		}
		else{
			achou = 0;
			break;
}
}
	if(achou==1){
		printf("É uma PA !");
	}
	else {
		printf("Não é uma PA !");
	}
}
