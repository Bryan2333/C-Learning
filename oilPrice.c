#include <stdio.h>

int main(void){
	int vol, type; //油量、类型
	double price;
	char assist; //服务类型
	scanf("%d %d %c", &vol, &type, &assist);
	switch(assist){
		case 'm' : //如果是自助
			if(type == 90)
			{
				price = 6.95 * vol * 0.95;	
			}
			else if(type == 93)
			{
				price = 7.44 * vol * 0.95;	
			}
			else if(type == 97)
			{
				price = 7.93 * vol * 0.95;
			}
			break;
		case 'e': //如果是人工协助
			if(type == 90)
			{
				price = 6.95 * vol * 0.97;	
			}
			else if(type == 93)
			{
				price = 7.44 * vol * 0.97;	
			}
			else if(type == 97)
			{
				price = 7.93 * vol * 0.97;
			}
			break;
	}
	printf("%.2lf", price);
	return 0;
}