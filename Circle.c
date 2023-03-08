#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 30

int main() {
	
	int number,i,j;
	double ctrl,temp;

	printf("Enter the size of the circle: ");
	scanf("%d", &number);
	
	for(i=0; i<MAX; i++) {
		for(j=0; j<MAX; j++) {
			temp= pow(i-(MAX/2), 2) + pow(j-(MAX/2),2);
			ctrl= sqrt(temp);
			if(ctrl <= number) {
				printf("o ");
			}
			else
			printf("- ");
		}
		printf("\n");
	}

	return 0;
}
