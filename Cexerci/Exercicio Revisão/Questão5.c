
/* Questão 4 - vetor sem número repetido 5,1,1,4,7,1,8,5*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int vetor[8]={5,1,1,4,7,1,8,5
	},
	i,j,vetorn[8],cont=0;
	/*for(i=0;i<8;i++){
		printf("Escreva o %d elemento do vetor: ",i+1);
		scanf("%d",&vetor[i]);
	}*/
	for (i=0;i<8;i++){
		for (j=i+1;j<8;j++){
			if (vetor[i] != vetor[j]){
				vetorn[cont] = vetor[i];				
				cont++;
			}
		}
	}
	str
	for (i=0;i<cont;i++){
		printf("Não repetidos: %d\n",vetorn[i]);
	}
}
