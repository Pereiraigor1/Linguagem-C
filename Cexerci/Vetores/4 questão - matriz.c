
#include <stdio.h>
#include <locale.h>


main(){
	setlocale(LC_ALL,"Portuguese");
	int M [5] [5],i,j;
	
	for (i=0;i<5;i++){
		for (j=0;j<5;j++){
			printf("Digite os valores da matriz na posicão %dx%d: ",i+1,j+1);
			scanf("%d",&M [i] [j]);
		}
	}
	printf("\n");
	printf("Matriz 5X5 :\n\n");
	for (i=0;i<5;i++){
		for (j=0;j<5;j++)
			printf("%d\t", M [i] [j]);
		printf("\n");	
	}	
	printf("\n");
	printf("Matriz transposta: \n\n");
	for (i=0;i<5;i++){
		for (j=0;j<5;j++)
			printf("%d\t",M[j] [i]);
		printf("\n");
	}
}

