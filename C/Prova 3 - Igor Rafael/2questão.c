
// Nome: Igor Rafael da Silva Pereira

#include <stdio.h>
#include <locale.h>

int mdc (int x,int y);

main(){
	setlocale(LC_ALL,"Portuguese");
	int N1,N2;
	printf("Digite um número inteiro: ");
	scanf("%d",&N1);
	printf("Digite outro número inteiro: ");
	scanf("%d",&N2); 
	printf("O maior divisor comum é : %d",mdc (N1,N2));
}

int mdc (int x,int y){
	if(x%y ==0) return y;
	else return mdc(y,x%y);
}


