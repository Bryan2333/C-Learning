#include <stdio.h>

int main(){
	double r, circleArea, circleLong;
	printf("请输入圆的半径： ");
	scanf("%lf", &r);
	circleArea = 3.14 * r * r;
	circleLong = 2 * 3.14 * r;
	/*printf("The area of the circle is %lf.\n", circleArea);
	printf("The length of the circle is %lf.\n", circleLong);*/
	printf("面积=%lf,周长=%lf.\n", circleArea, circleLong);
	return 0;
}
