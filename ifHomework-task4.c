//if作业第四题

#include <stdio.h>
#include <math.h>

int main(void){
	int num1;
	scanf("%d", &num1);
	int hundreds = num1 / 100;
	int ones = num1 % 10;
	int tens = num1 / 10 % 10;
	int total = pow(hundreds,3) + pow(tens,3) + pow(ones,3);
	if(num1 < 100 || num1 > 999){
		printf("Invalid Value.\n");
	}
	else{
		if(num1 == total){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
}
