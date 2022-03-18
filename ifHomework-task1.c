// if作业第一题
#include <stdio.h>

int main(void){
	int a, b;
	scanf("%d%d", &a, &b);
	int addResult = a + b;	//计算出加法结果
	int subtract = a - b;	//计算出减法结果
	int multiply = a * b;	//计算出乘法结果
	printf("%d + %d = %d\n", a, b, addResult);
	printf("%d - %d = %d\n", a, b, subtract);
	printf("%d * %d = %d\n", a, b, multiply);
	if (a % b == 0) /* 如果可以被整除 */ {
		int zhengchu = a / b;
		printf("%d / %d = %d\n", a, b, zhengchu);
	}
	else /* 如果不可以被整除 */ {
		double unzhengchu = a * 1.0 / b;
		printf("%d / %d = %.2lf\n", a, b, unzhengchu);
	}
	return 0;
}
