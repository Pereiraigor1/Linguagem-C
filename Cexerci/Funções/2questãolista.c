
//2. Escreva uma fun��o que receba tr�s inteiros como argumentos e retorne o maior valor.


#include <stdio.h>
#include <locale.h>

int maiorvalor (int a, int b, int c);

main(){
	setlocale(LC_ALL,"Portuguese");
	int N1,N2,N3;
	printf("Digite o primeiro n�mero: ");
	scanf("%d",&N1);
	printf("Digite o segundo n�mero: ");
	scanf("%d",&N2);
	printf("Digite o terceiro n�mero: ");
	scanf("%d",&N3);
	printf("Maior valor = %d",maiorvalor(N1,N2,N3));
	
}

int maiorvalor(int a, int b, int c){
	if (a>b && a>c) return a;
		else if (b>a && b>c) return b;
			else return c;	
}
