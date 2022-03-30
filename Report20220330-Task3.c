#include <stdio.h>

int main(void){
	double sum = 0;
	int sign = 1, n;
	for(double i = 2; i <= 100; i = i + 2)
	{
		sum = sum + sign * 1 / i;
		sign = sign * (-1);
	}
	printf("Sum = %lf", sum);
	return 0;
} 
