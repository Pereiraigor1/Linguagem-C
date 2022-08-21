
#include <stdio.h>
#include <string.h>

main(){
	char atletas[5][50];
	int gols[5],i,maiorgol;
	char goleador [30];
	for (i=0;i<5;i++){
		printf("Digite o nome do atleta %d: ",i+1);
		gets(atletas[i]);
	}
	for (i=0;i<5;i++){
		printf("Digite a quantidade de gols do atleta %d: ",i+1);
		scanf("%d",&gols[i]);
	}
	maiorgol = gols[0];
	strcpy(goleador,atletas[0]);
	for (i=0;i<5;i++){
		if (gols[i] > maiorgol){
			maiorgol = gols [i];
			strcpy(goleador,atletas[i]);
		}
	}
	printf("Goleador: %s\t com %d gols ",goleador,maiorgol);
}
