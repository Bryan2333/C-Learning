#include <stdio.h>

int main(void){
	double num1;
	double sum = 0;
	printf("Please enter a number: ");
	scanf("%lf", &num1);
	for(double i = 1; i <= num1; i++){
		sum = sum + 1 / i;
	}
	printf("The sum is %.3lf", sum);
	return 0;
}