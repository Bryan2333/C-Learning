//找出3~100之间所有3的倍数中，个位数为2的数字
#include <stdio.h>

int main(void){
	for(int i = 3; i <= 100; i++)
	{
		int ones = i % 10; //算出个位数
		if(i % 3 == 0)
		{
			if(ones == 2)
			{
				printf("%d ", i);
			}
		}
	}
	return 0;
}