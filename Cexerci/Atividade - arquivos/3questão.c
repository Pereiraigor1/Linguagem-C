#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    struct{
        char nome[30];
        int idade;
        float telefone;
    } agenda[5];
    FILE *fp;
    int i;
    char aux1[30], aux2[30];
    if((fp=fopen("agenda.dat","w+b"))==NULL){
        puts("Erro ao abrir o arquivo!!");
        exit(1);
    }
    for(i=0;i<5;i++){
        printf("\n\nAmigo %d\n\n",i+1);
        printf("Nome: ");
        gets(agenda[i].nome);
        printf("Idade: ");
        gets(aux1);
        agenda[i].idade=atoi (aux1);
        printf("Telefone: ");
        gets(aux2);
        agenda[i].telefone=atof (aux2);
        fflush(stdin);
    }
    for (i=0;i<5;i++) 
        fwrite(&agenda[i],sizeof(agenda[i]),1,fp);
    fclose(fp);
    fp=fopen("agenda.txt", "rb");
    for (i=0;i<5;i++){
        if(fread(&agenda[i],sizeof(agenda[i]),1,fp)==1){
            printf("\nNome: %s ",agenda[i].nome);
            printf("Idade: %d ",agenda[i].idade);
            printf("Telefone: %.f",agenda[i].telefone);
        }
    }
    fclose(fp);
}
