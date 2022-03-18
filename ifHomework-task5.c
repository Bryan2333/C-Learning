//if作业第五题

#include <stdio.h>
#include <math.h>

int main(void){
	int x, y, desX, desY;
	scanf("%d%d%d%d", &x, &y, &desX, &desY);
	int xMoveTotal = abs(desX - x); //计算出x方向上的步数
	int yMoveTotal = abs(desY - y); //计算出y方向上的步数
	int totalMove = xMoveTotal + yMoveTotal; //计算出总步数
	printf("%d\n", totalMove);
	return 0;
}
