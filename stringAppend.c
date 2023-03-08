#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int i;
	char first[20]="Hello ", second[20]="World!";
	char *a = calloc(100, sizeof(char));

	for(i=0;i<strlen(first);i++) {
		a[i] = first[i];
	}
	for(i=strlen(first);i<(strlen(first)+strlen(second));i++) {
		a[i] = second[i-strlen(first)];
	}	
	for(i=0;i<strlen(a);i++) {
		printf("%c",a[i]);
	}
	free(a);
	return 0;
}
