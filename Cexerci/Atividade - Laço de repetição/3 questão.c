
#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	float sal,salnovo,gasto=0,reajuste;
	printf("Digite o salário do funcionário: ");
	scanf("%f",&sal);
	while (sal >0){
		if (sal < 2000){
			reajuste = sal * 12/100;
			salnovo = sal + reajuste ;
			gasto = gasto + reajuste;
		}
		else if (sal >= 2000 && sal <= 4000){
			reajuste = sal * 10/100;
			salnovo = sal + reajuste;
			gasto = gasto + reajuste;
		}
		else {
			reajuste = sal * 8/100;
			salnovo = sal + reajuste;
			gasto = gasto + reajuste;
		}
		printf("Escreva um novo salário : ");
		scanf("%f",&sal);
	}	
		printf("\nTotal a mais gasto pela empresa com os aumentos = %.2f",gasto);
	getch();

}
