#include <stdio.h>
#include <locale.h>

main(){
	setlocale (LC_ALL,"Portuguese");
	int i,cont,n;
	
	for(i=1;i<=1000;i++){
		cont = 0;
		for (n=1;n<=i;n++){
			if(i%n ==0){
				cont++;
			}
		}
		if(cont==2) printf("%d\n",i);
	}
	getch();
}
