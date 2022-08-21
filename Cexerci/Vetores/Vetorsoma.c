

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int i,VetA[5],VetB[5],S[5];
	for (i=0;i<5;i++){
		printf("Digite o valor do vetor A : ");
		scanf("%d",&VetA[i]);
	}
	for (i=0;i<5;i++) {
		printf("Digite o valor do vetor B : ");
		scanf("%d",&VetB[i]);
}
	for (i=0;i<5;i++){
	S[i] = VetA[i] + VetB[i];
	printf(" O vetor C é %d\n",S[i]);
}
}
