#include <stdio.h>

int main(void){
	int grade = 0, unpass = 0, n = 0;
	do
	{
		printf("Please enter your grade: ");
		scanf("%lf", &grade);
		if(grade < 60)
		{
			unpass++;
		}
		n++;
	}while(n <= 10);
	printf("unpass: %d", unpass);
	return 0;
}