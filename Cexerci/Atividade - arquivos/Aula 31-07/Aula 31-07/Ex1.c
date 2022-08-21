#include<stdio.h>
main(){
	int i;
	char c[50];
	gets(c);
	for(i=0;i<strlen(c);i++){
		if(isupper(c[i])) c[i] = tolower(c[i]);
		else c[i] = toupper(c[i]);
	}
	puts(c);
}
