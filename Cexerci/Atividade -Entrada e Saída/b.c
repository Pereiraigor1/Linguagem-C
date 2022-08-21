
#include  <stdio.h>
#include <math.h>

main(){
	float raio,area,pi;
	pi = 3.1415;
	printf("Digite o valor do raio: ");
	scanf("%f",&raio);
	area = pow(raio,2)*pi;
	printf(" O valor da area %.2f",area );
	
}
