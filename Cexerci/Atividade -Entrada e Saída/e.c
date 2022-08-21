#include <stdio.h>

main(){
	float salmin,sala,def;
	printf("Digite o valor do salario: ");
	scanf("%f",&sala);
	printf("Digite o valor do salario minimo: ");
	scanf("%f",&salmin);
	def = sala/salmin;
	printf("Estao contido cerca de %.2f salarios minimos",def);

}
