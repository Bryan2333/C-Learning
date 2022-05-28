//任务5
#include <stdio.h>

int main(void){
	int guess, guesstimes, test, ifright = 0;
	scanf("%d %d", &guess, &guesstimes);
	for(int i = 1; i <= guesstimes; i++)
	{
		scanf("%d", &test);
		if(test < 0){
			break;
		}
		if(test > guess){ 
			printf("Too big\n");
		}
		else if(test < guess){
			printf("Too small\n");
		}
		else if(test == guess){
			if(i == 1){ //一次猜对
				printf("Bingo!\n");
				ifright = 1;
			}
			else if(i <= 3){
				printf("Lucky You!\n");
				ifright = 1;
			}
			else if(i > 3){
				printf("Good Guess!\n");
				ifright = 1;
			}
			break;
		}
	}
	if(ifright == 0){ //没有在规定次数内猜对
		printf("Game Over\n");
	}
	return 0;
}
