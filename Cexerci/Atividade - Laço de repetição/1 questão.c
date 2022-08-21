#include <stdio.h>
#include <math.h>

main(){
	int i,a;
	float num = 4,den=1,soma=0;
	printf("Escreva um numero para calcular o valor de pi com aproximacao (30,40,50,60): ");
	scanf("%d",&a);
	
	for (i=1;i<=a;i++){
		if (i%2 == 1 && den == 1){
			soma = soma + (num/den);
	}
		if (i%2 == 1 && den >1){
			soma = soma + (num/den);
		}
		else if (i % 2 == 0 && den > 1){
			soma = soma - (num/den);
			
		}
		den = den+2;	
	}
		printf("\n O valor de pi eh : %f",soma);

	getch();	
}
