
//Escreva uma fun��o que receba um valor inteiro n como argumento e retorne a maior pot�ncia de 2 maior ou igual a n.

#include <stdio.h>
#include <math.h>
#include <locale.h>

int potencia (int n);


main(){
	setlocale(LC_ALL,"Portuguese");
	int valorn;
	printf("Digite um n�mero inteiro: ");
	scanf("%d",&valorn);
	printf("A maior potencia de base 2 maior ou igual a n � : %d",potencia(valorn));
}

int potencia (int n){
	int i,result;
	for (i=0;i<n;i++){
		result = pow(2,i);
		if (result >= n) return i;
	}
}
