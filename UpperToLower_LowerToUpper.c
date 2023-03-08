#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i;
	char string[] = "Type DOWn WhatEver TExT You waNT";
	char newString[strlen(string)];
	
	for(i=0;i<strlen(string);i++) {
		
		if(string[i]>=65 && string[i]<97) {
			newString[i]=string[i]+32;
		}
		else if (string[i]>=97) { 
			newString[i]=string[i]-32;	
		}
		else newString[i]=' ';
	}
	printf("%s\n", string);
	for(i=0;i<strlen(string);i++) {
			printf("%c", newString[i]);
	}
	return 0;
}
