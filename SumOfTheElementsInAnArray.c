#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i, sum = 0, myarray[] = {2,5,8,12,0,5,7,3,14};
	for(i=0;i<9;i++) {
		sum = sum + myarray[i];
		printf("%d\n", sum);
	}

	
	return 0;
}
