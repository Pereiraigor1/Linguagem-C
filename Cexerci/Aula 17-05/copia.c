#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main(){
    char letra[1000];
    char mostra[1000];
    int i,x,tletras,t,chances,derrota,vitoria;
    char resposta;
    char ja[1000];
    char jae[1000];
    derrota=0;
    tletras=0;
    chances=5;
    vitoria=0;
    printf("\t***********************\n");
    printf("\t*    JOGO DA FORCA    *\n");
    printf("\t*          ___        *\n");
    printf("\t*         |   |       *\n");
    printf("\t*         |   O       *\n");
    printf("\t*         |  /|\\      *\n");
    printf("\t*         |   |       *\n");
    printf("\t*         |  / \\      *\n");
    printf("\t*         |______     *\n");
    printf("\t*                     *\n");
    printf("\t*        CWS          *\n");
    printf("\t***********************\n");
    printf("\n\n ATEN%cAO AS REGRAS: \n",128);
    printf("1-A LEITURA DA PALAVRA SERA FEITA EM CARACTERES MINUSCULOS!!!\n");
    printf("2-PARA RESPONDER, DIGITE UMA LETRA MAS NUNCA PRESSIONE ENTER. CASO ISSO\n");
    printf("ACONTECA, QUEM ESTIVER RESPONDENDO VAI PERDER 1 CHANCE!!!\n");
    printf("3-CASO UMA LETRA CORRETA OU INCORRETA SEJA DIGITADA MAIS DE UMA VEZ O PROGRAMA\n");
    printf("IRA ARMAZENAR ESSA LETRA E LEMBRAR O JOGADOR QUE A LETRA JA FOI DIGITADA\n");
    printf("4-NAO SAO SUPORTADOS CARACTERES ESPECIAIS COMO POR EXEMPLO:(~^`%c)\n",135);
    printf("\nBOM JOGO :)\n");
   

//===========================LEITURA DA PALAVRA================================================== 
   
    printf("\nDIGITE A PALAVRA E TECLE ENTER PARA CONTINUAR\n");
    fflush(stdin);
   
   
       for (i=0;;i++){
           letra[i]=getch();
           if (letra[i]==13)break;
           if (letra[i]<97|letra[i]>122){
                                         printf("VOCE ROUBOU. :( DIGITO INVALIDO\n\n");
                                         system("pause");
                                         exit(0);}
           putchar('*');
           tletras++;
           }
           if (tletras==0){
                           printf("\n\nNenhuma Palavra foi digitada\n\n");
                           system("pause");
                           exit(0);}
           printf("\n\nA PALAVRA TEM %d LETRAS\n",tletras);
          
//===========================DETERMINANDO=QUANTIDADE=DE=ESPAÇOS=EM=BRANCO==================================================          
                     
    for (i=0;i<tletras;i++){
        mostra[i]='_';
        printf(" %c ",mostra[i]);
                    }
                   
//=============================LENDO=A=LETRA=E=VERIFICANDO=SE=ELA=ESTÁ=CORRETA=====================================
   
           
    printf("\n\nDIGITE UMA LETRA\n");
   
    for (chances=6;chances>0;){
                            printf("\n");
                            fflush(stdin);
                            resposta=getch();
                            t=0;
                            derrota=0;

//=========================================VERIFICAÇÃO=DA=LETRA========================================================                           
                           
                            for (i=0;i<tletras;i++){
                                                    if (resposta==jae[i]){
                                                                          printf("\n\n\tA letra '%c' ja foi digitada\n",jae[i]);
                                                                          t=2;
                                                                          break;}
                                                    if (resposta==ja[i]){
                                                                         printf("\n\n\tA letra '%c' ja foi digitada\n",ja[i]);
                                                                         t=2;
                                                                         break;}
                                                   
                                                   
                                                    if (resposta==letra[i]){
                                                                            t=2;
                                                                            printf("\n\n\t\tLetra Correta!!!\n\n");
                                                                            vitoria++;
                                                                            ja[i]=resposta;
                                                                            mostra[i]=resposta;
                                                                            if(vitoria==tletras){
                                                                                                 printf("\n\n\t\tVoce venceu!!!\n\n");
                                                                                                 printf("\tA palavra era: ");
                                                                                                 for (i=0;i<tletras;i++){
                                                                                                                         printf("%c",letra[i]);}
                                                                                                 printf("\n\n");
                                                                                                 system("pause");
                                                                                                 exit(0);
                                                                                                 }
                                                                            }
                                                    if (resposta!=letra[i] && t==0){
                                                                           derrota++;
                                                                           if (derrota==tletras){
                                                                                                 jae[i]=resposta;
                                                                                                 printf("\n\n\t\tLetra Incorreta. Chances: %d\n\n",chances-1);
                                                                                                 chances--;
                                                                                                 derrota=0;
                                                                                                 }
                                                                           }          
                                                    }
                           
                           
//=============================EXIBE=O=RESULTADO=A=CADA=TECLA=======================================================                                           
   
    for (x=0;x<tletras;x++){printf(" %c ",mostra[x]);}


                               }                                               
                    
                    
//===========================SE=ISTO=AQUI=EM=BAIXO=FOR=EXIBIDO=SIGNIFICA=DERROTA=:(==================                     
    if (chances==0){
                    printf("\tA palavra era: ");
                    for (i=0;i<tletras;i++){
                    printf("%c",letra[i]);}
                    printf ("\n\nVoce Perdeu :(\n\n\n");
                    printf("\t***********************\n");
                    printf("\t*    JOGO DA FORCA    *\n");
                    printf("\t*          ___        *\n");
                    printf("\t*         |   |       *\n");
                    printf("\t*         |   O       *\n");
                    printf("\t*         |  /|\\      *\n");
                    printf("\t*         |   |       *\n");
                    printf("\t*         |  / \\      *\n");
                    printf("\t*         |______     *\n");
                    printf("\t*                     *\n");
                    printf("\t*        CWS          *\n");
                    printf("\t***********************\n");
                    }        
                     
                                                                      
                           
            
   
    printf("\n\n");
    system("pause");
}

