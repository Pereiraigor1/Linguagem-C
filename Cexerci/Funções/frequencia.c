

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int frequency(float a[], int n, int x);

main(){
	setlocale(LC_ALL,"Portuguese");
	float v[10] = {1,2,2,3,41,2,3,4,45.2};
	printf("%d vezes\n",frequency(v,10,2));	
}
int frequency (float a[],int n, int x){
	int i,cont=0;
	for (i=0;i<n;i++)
		if (a[i]==x) cont++;
	return cont; 
	
	
}
