
#include <string.h>
#include <stdio.h>
#include <locale.h>

main(){
	int V[5]={0, 3, 9, 10, 0};
	int i,j,k,cont=0, cont1=0;   //resposta 1,2,1,2,0
	for (i=0;i<5;i++){
		if (V[i]==0){
			cont++;
		}
	}	
	int Vnulo[cont];
  	for (i=0;i<5;i++){
		if (V[i]==0){
			Vnulo[i] = V[i];
		}
	}
	for (i=0;i<5;i++){
		if (V[i]!=0){
			cont1++;
		}
  } 
	int Vcom[cont1];
	for (i=0;i<5;i++){
		if (V[i]!=0){
			Vcom[i] = V[i];
		}
  } 		
			i = 0;
	while (i<cont1){
	V[i] = Vcom[i];
  	i++;
}
	j = 0;
	while (j <cont){
	V[i+j] = V[j];
	j++;
}
	for (k=0;k<5;k++){
		printf("%d\n",V[k]);
}
}
