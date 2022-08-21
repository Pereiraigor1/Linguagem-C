
#include <stdio.h>
#include <math.h>
#include <locale.h>

// Igor Rafael da Silva Pereira

main(){
	setlocale(LC_ALL,"Portuguese");
	int n,i;
	float num=1,den=2,soma=0;
	printf("Digite um número N: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		soma = soma + (num/den);
		num = num+den;
		den = den*2;
	}
	printf("A soma de N como %d termo é: %.4f\n",n,soma);
	
}
