#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>

main(){
	int i,random,vidas=5;
	char letra,anterior[30],acertos[30],cidades[5][30]={"ISLANDIA","DUBAI","SAO PETESBURGO","PALESTINA","LISBOA"};
	srand(time(NULL));
	random=rand()%5;
	for(i=0;i<strlen(cidades[random]);i++){
		if(cidades[random][i]==' ')acertos[i]=' ';
		else acertos[i]='_';
	}
	strcpy(anterior,acertos);
	while(vidas>0){
		/*if(erros>0){
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
			}
		}*/
		printf("A FORCA\n");
		printf("VIDAS: %d\n",vidas);
		puts(acertos);
		if(strcmp(cidades[random],acertos)){
			printf("\nDigite a letra:\n");
			letra=getchar();
			letra=toupper(letra);
			system("cls");
			for(i=0;i<strlen(cidades[random]);i++){
				if(letra==cidades[random][i]){
					acertos[i]=letra;
				}
			}
			if(strcmp(acertos,anterior)){
				strcpy(anterior,acertos);
			}
			else {
				vidas--;
			}
		}
		else{
			printf("\n\nVC GANHOU");
		}
	}
	if(vidas<1){
			printf("A FORCA\n");
			printf("VIDAS: %d\n",vidas);
			puts(cidades[random]);
			printf("\n\nVC MORREU!");
		}
}
