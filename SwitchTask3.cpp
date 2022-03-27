//Switch 作业3
#include <stdio.h>

int main(void){
	int year, month, day, date, SecondMonth;
	scanf("%d/%d/%d", &year, &month, &day);
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
		SecondMonth = 29;
	}else{
		SecondMonth = 28;
	}
	switch(month){
		case 1 :
			date = day;
			break;
		case 2 :
			date = 31 + day;
			break;
		case 3 :
			date = 31 + SecondMonth + day;
			break;
		case 4 :
			date = 31 * 2 + SecondMonth + day;
			break;
		case 5 :
			date = 31 * 2 + 30 + SecondMonth + day;
			break;
		case 6 :
			date = 31 * 3 + 30 + SecondMonth + day;
			break;
		case 7 :
			date = 31 * 3 + 30 * 2 + SecondMonth + day;
			break;
		case 8 :
			date = 31 * 4 + 30 * 2 + SecondMonth + day;
			break;
		case 9 :
			date = 31 * 5 + 30 * 2 + SecondMonth + day;
			break;
		case 10 :
			date = 31 * 5 + 30 * 3 + SecondMonth + day;
			break;
		case 11 :
			date = 31 * 6 + 30 * 3 + SecondMonth + day;
			break;
		case 12 :
			date = 31 * 6 + 30 * 4 + SecondMonth + day;
			break;
	}
	printf("%d", date);
	return 0;
}
