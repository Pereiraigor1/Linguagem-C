#include <stdio.h>
#include <math.h>
main() {
	int F;
	float  C;
	C = 0;
	F = 50;
	for ( ; ; ){
	C = (F - 32) * 5/9;
	printf("\t%f",C);
	F++;
	F++;
	if (F > 150) break ;
	}
}
