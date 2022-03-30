#include <stdio.h>

int main(void){
	for(int i = 3; i <= 100; i++)
	{
		int ones = i % 10; 
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
