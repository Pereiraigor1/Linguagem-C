#include <stdio.h>
#include <locale.h>

main(){
	setlocale (LC_ALL,"Portuguese");
	int Vet[8]={5,1,1,4,7,1,8,5},
	j,i,cont=0,Vetrepe[8],Vettira[8];
	/*for (i=0;i<8;i++){
		printf("Digite 8 valores inteiros para o vetor: ");
		scanf("%d",&Vet[i]); // 5,1,1,4,7,1,8,5,
}*/
	for (i=0;i<8;i++)
		for (j=i+1;j<8;j++){
			if (Vet[i]==Vet[j]){
				Vetrepe[cont] = Vet[i];
				cont++; 
			}
		}
	for (i=0;i<cont;i++){
		printf("repetido:%d\n",Vetrepe[i]);	
}
}

