
//Escreva uma função chamada media() que receba três argumentos reais e retorne a média aritmética entre eles:
// float media (float x1,float x2, float x3)

#include <stdio.h>
#include <locale.h>

float media (float x1,float x2, float x3);

main(){
	setlocale(LC_ALL,"Portuguese");
	float N1,N2,N3;
	printf("Digite um número real: ");
	scanf("%f",&N1);
	printf("Digite outro número real: ");
	scanf("%f",&N2);
	printf("Digite mais um número real: ");
	scanf("%f",&N3);
	printf("A média aritmética dos números é %.2f",media(N1,N2,N3));
}


float media (float x1, float x2, float x3){
	float aritmetica;
	aritmetica = (x1+x2+x3)/3;
	return aritmetica;
	
}
