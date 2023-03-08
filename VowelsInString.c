#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	int i, count = 0;
	char c1[]="welcome to my channel bRO";
	for(i=0;i!=strlen(c1);i++) {
	/*	if(c1[i] == 'a' || c1[i] == 'e' || c1[i] == 'o' || c1[i] == 'u' || c1[i] == 'i' || c1[i] == 'A' || c1[i] == 'E' || c1[i] == 'O' || c1[i] == 'U' || c1[i] == 'I') count++;*/
		switch(toupper(c1[i])) {
		case 'A':
		case 'E':
		case 'O':
		case 'U':
		case 'I':
			count++;
		}
	}
	printf("%d", count);
	return 0;
}
