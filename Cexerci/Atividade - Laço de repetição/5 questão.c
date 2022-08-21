
#include <stdio.h>
#include <locale.h>
#include <math.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	float A,seno=0,valor;
	for (A=0; A<=2.1; A = A+0.1){
		seno = A - (pow(A,3)/6)+(pow(A,5)/120)-(pow(A,7)/5040);
		printf("O valor da série para %.2f pi é = %f pi \n",A,seno);

	}
	getch();
}
