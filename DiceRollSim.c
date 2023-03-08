#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	srand(time(NULL));
	int i, roll, dice = 5;
	for(i=0;i<dice;i++) {
		
	roll = rand() % 6 + 1;
	printf("Dice: %d\n",roll);
	}
	
	return 0;
}
