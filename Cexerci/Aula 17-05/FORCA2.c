#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>

main(){
	int i,random,erros=0;
	char letra,anterior[30],acertos[30],filmes[10][50]={"O PODEROSO CHEFAO","TRANSFORMERS","AVATAR","SCOTT PILGRIM CONTRA O MUNDO","DOUTOR ESTRANHO","BABADOOK","A BRUXA","UM LUGAR SILENCIOSO","DONNIE DARKO","ANJOS DA LEI"};
	srand(time(NULL));
	random=rand()%10;
	for(i=0;i<strlen(filmes[random]);i++){
		if(filmes[random][i]==' ')acertos[i]=' ';
		else acertos[i]='_';
	}
	strcpy(anterior,acertos);
	while(erros<=6){
		system("cls");
		printf("\tA FORCA\n");
		switch(erros){
				case 0:printf("\t");
						break;
				case 1:printf("  0  \n");
						break;
				case 2:printf(" _0  \n");
						break;
				case 3:printf(" _0_ \n");
						break;
				case 4:printf(" _0_ \n  |\n");
						break;
				case 5:printf(" _0_ \n  |\n  /\n");
						break;
				case 6:printf(" _0_ \n  |\n  /\\n");
						printf("\n VC MORREU!");
						break;
						break;
			}
		printf("\tFILME\n");
		puts(acertos);
		printf("\nDigite a letra:\n");
		letra=getchar();
		fflush(stdin);
		letra=toupper(letra);
		if(strcmp(filmes[random],acertos)){
			for(i=0;i<strlen(filmes[random]);i++){
				if(letra==filmes[random][i]){
					acertos[i]=letra;
				}
			}
			if(strcmp(acertos,anterior))strcpy(anterior,acertos);
			else erros++;
		}
		else{
			printf("\n\nVC GANHOU!");
			break;
		}
	}
}
