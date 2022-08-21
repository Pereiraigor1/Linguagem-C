
//Escreva uma função que receba dois inteiros como argumentos e retorne o maior valor.

#include <stdio.h>
#include <locale.h>

int maiorvalor(int a, int b);

main(){
	setlocale(LC_ALL,"Portuguese");
	int n1,n2;
	printf ("Digite um valor: ");
	scanf("%d",&n1);
	printf("Digite outro valor: ");
	scanf("%d",&n2);
	printf("Maior = %d",maiorvalor(n1,n2));
}

int maiorvalor(int a,int b){	
	if (a>b) return a;
		else return b;
}
