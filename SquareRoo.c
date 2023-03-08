// Find square root of a number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int power(number)
{
	number=number*number;
	return number;
}
int main()
{
	int number;
	
	while (1)
	{
		printf("Enter the number: ");
		scanf("%d", &number);
		number=power(number,2);
		printf("Result: %d \n",number);
	}
	return 0;
}
