//不完整
#include <stdio.h>

int main(void){
	int n, digit, letter, other;
	char test;
	printf("How many character do you want to enter: ");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		scanf("%c", &test);
		printf("Please enter a character: ");
		if((test >= 'a' && test <= 'z' ) || (test >= 'A' && test <= 'Z'))
		{
			letter++;
		}
		else if(test >= '0' && test <= '9')
		{
			digit++;
		}
		else
		{
			other++;
		}
	}
	printf("letter: %d, digit: %d, other: %d", letter, digit, other);
	return 0;
}