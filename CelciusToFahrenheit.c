#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int fahrenheit, celcius, i;
	printf("Enter the temperature in degrees of celcius:");
	scanf("%d", &celcius);
	fahrenheit=celcius*9/5+32;
	printf("Temperaturee is %d degrees fahrenheit.", fahrenheit);
	
	return 0;
}
