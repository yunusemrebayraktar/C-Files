#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i, length, check;
	char string[20];
	char reverse_string[20];
	
	printf("Enter a string: ");
	scanf("%s", string);
	length = strlen(string);
	for(i=0;i<length;i++) {
		reverse_string[length-1-i] = string[i];		
	}
	for(i=0;i<length;i++) {
		if(string[i]==reverse_string[i]) check=1;
		else {
			check=0;
			break;
		}
	}
	if(check == 1) printf("This is a palindrom!");
	else printf("This is NOT a palindrom");
	return 0;
}
