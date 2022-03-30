#include <stdio.h>

int main(void){
	int sum = 0, grade, i;
	for(i = 1; i <= 10; i++)
	{
		scanf("%d", &grade);
		sum = sum + grade;
		printf("Grade = %d\n", grade);
	}
	double average = sum / 10.0;
	printf("Sum = %d\n", sum);
	printf("Average = %lf", average);
	return 0;
} 
