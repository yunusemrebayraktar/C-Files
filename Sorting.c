#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	
	int temp, i, j;
	int my_array[] = {2,6,7,9,8,3,1,12,4,10};
	for(i=0;i<10;i++) {
		for(j=0; j<9;j++) {
			if(my_array[j]>my_array[j+1]) {
			temp = my_array[j];
			my_array[j] = my_array[j+1];
			my_array[j+1] = temp;
			}
		}

	}
	for(i=0;i<10;i++) {
		printf("%d ", my_array[i]);
	}
	return 0;
}
