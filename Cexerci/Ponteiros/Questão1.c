
#include <stdio.h>
#include <locale.h>
#include <string.h>

//& endereço, aponta;
//* recebe valor.

trocadeordem(char *a, char *b){
	char c;
	c = *a;
	b = a;
	a = b;
}

main(){
	setlocale(LC_ALL,"Portuguese");
	char valor[60],*px,*py;
	printf("Escreva uma string: ");
	gets(valor);
	printf("Eis a sua string invertida: \n");
	px=valor;
	
}
