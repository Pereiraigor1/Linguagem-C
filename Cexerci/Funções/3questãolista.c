
//Escreva uma fun��o chamada media() que receba tr�s argumentos reais e retorne a m�dia aritm�tica entre eles:
// float media (float x1,float x2, float x3)

#include <stdio.h>
#include <locale.h>

float media (float x1,float x2, float x3);

main(){
	setlocale(LC_ALL,"Portuguese");
	float N1,N2,N3;
	printf("Digite um n�mero real: ");
	scanf("%f",&N1);
	printf("Digite outro n�mero real: ");
	scanf("%f",&N2);
	printf("Digite mais um n�mero real: ");
	scanf("%f",&N3);
	printf("A m�dia aritm�tica dos n�meros � %.2f",media(N1,N2,N3));
}


float media (float x1, float x2, float x3){
	float aritmetica;
	aritmetica = (x1+x2+x3)/3;
	return aritmetica;
	
}
