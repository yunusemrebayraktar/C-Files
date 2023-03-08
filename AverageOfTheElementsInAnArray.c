#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i, sum = 0, myarray[] = {2,5,75,89,54,62,37,3,12,40};
	double average;
	for(i=0;i<10;i++) {
		sum = sum + myarray[i];
		if(i>0) {
			average = (double) sum /(i+1);
			printf("Average is: %.2lf\n", average);
		}
		else printf("Average is: %.2lf\n", (double) myarray[0]);
	}
	return 0;
}
