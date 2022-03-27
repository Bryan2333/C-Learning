//Switch 作业2
#include <stdio.h>

int main(void){
	int num1, num2, result;
	char operatorA;
	scanf("%d %c %d", &num1, &operatorA, &num2);
	switch(operatorA){
		case '+' :
			result = num1 + num2;
			printf("%d", result);
			break;
		case '-' :
			result = num1 - num2;
			printf("%d", result);
			break;
		case '*' :
			result = num1 * num2;
			printf("%d", result);
			break;
		case '/' :
			result = num1 / num2;
			printf("%d", result);
			break;
		case '%' : 
			result = num1 % num2;
			printf("%d", result);
			break;
		default : 
			printf("ERROR\n");
		}
	return 0;
}