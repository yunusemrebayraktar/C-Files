#include <stdio.h>
#include <stdlib.h>

int main() {

	int sum, first=0, second=1, i;
	for(i=0; i<10;i++) {
		if(i==0) printf("%d,%d,", first, second);
		sum = first + second;
		first = second;
		second = sum;
		printf("%d,",sum);
	}
	return 0;
}
