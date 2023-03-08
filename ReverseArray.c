#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int myArray[9] = {1,2,3,4,9,7,5,6,3};
	int reverseArray[9];
	int i;
	for(i=0;i<9;i++) {
		reverseArray[8-i] = myArray[i];		
	}
	for(i=0;i<9;i++) {
		printf("%d ",myArray[i]);
	}
	printf("\n");
	for(i=0;i<9;i++) {
		printf("%d ",reverseArray[i]);
	}
	
	return 0;
}
