
#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int den;
	float soma=0,num1=38.0,num2=38.0;
	for (den=1; den<= 37 ; den++){
		num1 = num1-1;	
		num2 = num1+1;
		soma = soma +((num1*num2)/den);
	}
	printf("A soma é de %.2f",soma);
	getch();
}
