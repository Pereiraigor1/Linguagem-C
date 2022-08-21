
#include <stdio.h>

main(){
	float Ana=1.5,Feli=1.1;
	int con=0;
	do {
		Ana = Ana + 0.02;
		Feli = Feli + 0.03;
		con = con +1;
	} while (Feli < Ana);
	printf("A quantidade de anos para que Felisberto seja maior eh de %d anos",con);	
}
