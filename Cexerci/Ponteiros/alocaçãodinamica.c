

#include <stdio.h>
#include <stdlib.h>

main(){
	char str[15] = "IFAM CMDI",*p;
	p = (char *) malloc(strlen(str)*sizeof(char));
	strcpy(p,str);
	printf("%s", p);
	p = realloc(p,15);
	free(p);
}
