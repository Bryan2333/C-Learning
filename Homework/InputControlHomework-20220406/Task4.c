//念数字 仍然有bug

#include <stdio.h>
#include <math.h>

int main(void){
	int num, digit, dividee;
	scanf("%d", &num);
	int temp = num;
	if(temp < 0){ //如果是负数则输出fu,并将其变成正数
		printf("fu ");
		num = -num;
	}
	for(int i = 100; i >= 0; i--)
	{
		dividee = pow(10,i);
		digit = num / dividee;
		if(digit == 0 && i != 0 ){ 
			continue;
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
		if(i == 0){ //最后一位数不加空格
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
		num = num % dividee;
	}
	return 0;
}
