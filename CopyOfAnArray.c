#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i, length;
	int array[] = {1,8,9,35,4,7};
	int *copy = malloc(sizeof(int)*6);
	for(i=0;i<6;i++) {
		copy[i]=array[i];
	}
	for(i=0;i<6;i++) {
		printf("%d ", copy[i]);
	}
	array[0]=0;
	printf("\n");
	printf("%d\n", array[0]);
	printf("%d", copy[0]);
	free(copy);
	return 0;
}
