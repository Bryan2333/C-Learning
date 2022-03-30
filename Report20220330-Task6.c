#include <stdio.h>

int main(void){
	int n, i, temp, MaxGrade = 0;
	printf("How many grades do you want to enter: ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		printf("Please enter your grade: ");
		scanf("%d", &temp);
		if(temp > MaxGrade)
		{
			MaxGrade = temp;
		}
	}
	printf("The maximum is %d\n", MaxGrade); 
	return 0;
}
