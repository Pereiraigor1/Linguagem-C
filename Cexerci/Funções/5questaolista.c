
//Escreva uma fun��o que receba um valor inteiro n como argumento e retorne 1 se n for primo; caso contr�rio retorne 0.

#include <stdio.h>
#include <locale.h>

int primo(int a);


main(){
	setlocale(LC_ALL,"Portuguese");
	int N;
	printf("Digite um n�mero para verificar se � primo: ");
	scanf("%d",&N);
	printf("Verifica��o se � primo ou n�o: %d",primo(N));
}

int primo (int a){
	int i,resultado=0;
	for (i=2;i<=a/2;i++){
		if (a % i == 0) resultado++;
	}	
	if (resultado == 0) return 1;
		else return 0;
}
