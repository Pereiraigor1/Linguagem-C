//Nome: Igor Rafael da Silva Pereira

#include<stdio.h>
#include<string.h>
#include<locale.h>

void concatenar(char *s1, char *s2, int n);

int main(){
	setlocale(LC_ALL, "Portuguese");
	char str1[40], str2[40];
	int i, aux;
	printf("Digite uma string: ");	
	gets(str1);
	aux = strlen(str1);
	printf("Digite outra string: ");
	gets(str2);
	printf("Informe um número (menor ou igual a %d): ", aux);
	scanf("%d",&i);
	concatenar(str1,str2,i);
	return 0;
}
void concatenar(char *s1, char *s2, int n){
	int j;
	char str3[n];
	for (j=0;j<=n;j++)
		str3[j]=s1[j];
	puts(strcat(s2,str3));
}
