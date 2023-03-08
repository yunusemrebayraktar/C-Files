#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i, year;
	printf("The year: ");
	scanf("%d", &year);
	if(year%4!=0) printf("%d is not a leap year.", year);
	else if(year%100==0 && year%400!=0) printf("%d is not a leap year.", year);
	else if(year%4000==0) printf("%d is not a leap year.", year);
	else printf("%d is a leap year.", year);
	
	return 0;
}
