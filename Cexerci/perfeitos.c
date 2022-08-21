
#include <stdio.h>

main(){
	int N,i,a=1,aux;
	do {
		printf("Digite os 10 numeros para verificar se sao perfeitos : ");
		scanf("%d",&N);
		a++;
		} while (a<11);
		while (i<N){
		i++;
		if ((N % i ==0) && (N!= i)){
			aux = aux + i;
			printf("%d",aux);
			printf(" O numero %d eh perfeito\n",N);
	}
			else {
				printf(" O numero %d nao eh perfeito\n ",N);
		}
		}
		}


