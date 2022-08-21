
#include <stdio.h>
#include <locale.h>


main(){
	setlocale(LC_ALL,"Portuguese");
	int M [5] [5],j,i,somaprin=0,somasec=0,n;
	
	for (i=0;i<5;i++){
		for (j=0;j<5;j++){
			printf("Digite o valor na posição %dx%d: ",i+1,j+1);
			scanf("%d",&M[i] [j]);			
		}
	}
	for (i=0; i<5; i++){
		for (j=0 ; j<5; j++){
			if (i==j){
				somaprin += M [i] [j];
			}
		}
	}
	for (i=0;i<5;i++){
		for (j=0;j<5;j++){
			if (i+j == 4)
				somasec = somasec + M [i] [j];
		}
	}
	printf("A soma da diagonal principal é : %d\n",somaprin);
	printf("A soma da secundária principal é : %d",somasec);
}
