/*
 *  Autor: Kelvin Santiago
 * Criado: 27/06/2013
 */

#include<math.h>
#include<stdio.h>
#include<string.h>

int main(){

int numerocriancas, mesesvida, contcrianca = 0, contcriancamasculino = 0, contmenos24 = 0;
float porcentagemmortas, porcentagemmasculinomortas, porcentagemmenores24;
char sexo[10];

scanf("%d",&numerocriancas);
scanf("%s",sexo);
scanf("%d",&mesesvida);

    while (strcmp(sexo,"VAZIO") != 0){
        contcrianca++;

        if (strcmp(sexo,"MASCULINO") == 0){
            contcriancamasculino++;
        }

        if (mesesvida <= 24){
            contmenos24++;
        }

        scanf("%s",sexo);
        scanf("%d",&mesesvida);
    }

    porcentagemmortas = (float) (contcrianca * 100) / numerocriancas;
    porcentagemmasculinomortas =  (float) (contcriancamasculino * 100) / numerocriancas;
    porcentagemmenores24 = (float) (contmenos24 * 100) / numerocriancas;

    printf("PORCENTAGEM DE MORTOS = %.2f\n",porcentagemmortas);
    printf("PORCENTAGEM DE MASCULINOS MORTOS = %.2f\n",porcentagemmasculinomortas);
    printf("PORCENTAGEM DE MENOS DE 24 MESES = %.2f\n",porcentagemmenores24);

return 0;
}


