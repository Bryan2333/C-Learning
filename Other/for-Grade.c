#include <stdio.h>

int main(void){
	int score;
	double sum = 0;
	for(int i = 0; i < 3;i++)
	{
		scanf("%d", &score);
		sum = sum + score;
		printf("%lf\n", sum);
	}
	return 0;
}