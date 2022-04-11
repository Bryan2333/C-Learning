//念数字 最终修复版

#include <stdio.h>
#include <math.h>
int main(void){
	int num, digit, dividee,e=0;
	scanf("%d", &num);
	const int temp = num;
		if(temp < 0){ 
		printf("fu ");
		num = -num; //将负数变为正数
	}
	for(int i = 100; i >= 0; i--)
	{
		dividee = pow(10,i);
		digit = num / dividee;
		if(digit == 0 && i!=0 ){
			continue;
		}
		digit = digit - e;
		num = num % dividee;
		int a = pow((10),(i-1));
		if(num < a){ //如果三位数余数小于10，则加10
			num = num + a;
			e = 1;
		}else {
			e = 0;
		}
		if(i != 0){
			switch(digit){
			case 0 :
				printf("ling ");
				break;
			case 1 :
				printf("yi ");
				break;
			case 2 :
				printf("er ");
				break;
			case 3 :
				printf("san ");
				break;
			case 4 :
				printf("si "); 
				break;               
			case 5 :
				printf("wu ");
				break;
			case 6 :
				printf("liu ");
				break;
			case 7 :
				printf("qi ");
				break;
			case 8 :
				printf("ba ");
				break;
			case 9 :
				printf("jiu ");
				break;
			}
		}
		if(i == 0){
			switch(digit){
			case 0 :
				printf("ling");
				break;
			case 1 :
				printf("yi");
				break;
			case 2 :
				printf("er");
				break;
			case 3 :
				printf("san");
				break;
			case 4 :
				printf("si"); 
				break;               
			case 5 :
				printf("wu");
				break;
			case 6 :
				printf("liu");
				break;
			case 7 :
				printf("qi");
				break;
			case 8 :
				printf("ba");
				break;
			case 9 :
				printf("jiu");
				break;
			}
		}
	}
	printf("\n");
	return 0;
}
