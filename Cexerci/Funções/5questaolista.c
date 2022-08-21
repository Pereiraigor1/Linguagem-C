
//Escreva uma função que receba um valor inteiro n como argumento e retorne 1 se n for primo; caso contrário retorne 0.

#include <stdio.h>
#include <locale.h>

int primo(int a);


main(){
	setlocale(LC_ALL,"Portuguese");
	int N;
	printf("Digite um número para verificar se é primo: ");
	scanf("%d",&N);
	printf("Verificação se é primo ou não: %d",primo(N));
}

int primo (int a){
	int i,resultado=0;
	for (i=2;i<=a/2;i++){
		if (a % i == 0) resultado++;
	}	
	if (resultado == 0) return 1;
		else return 0;
}
