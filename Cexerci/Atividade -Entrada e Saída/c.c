#include <stdio.h>
#include <math.h>

main(){ 
	float peso,altura,imc;
	printf("Digite o valor do peso: ");
	scanf("%f",&peso);
	printf("Digite o valor da altura em m: ");
	scanf("%f",&altura);
	imc = peso/(pow(altura,2));
	printf("O valor do imc eh %.2f",imc);

}
