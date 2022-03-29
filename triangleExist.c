#include <stdio.h>
#include <math.h>

int main(void){
	double x1, y1, x2, y2, x3, y3;
	scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
	double side1 = sqrt(pow((x1 - x2),2) + pow((y1 - y2),2)); /*用pow函数简化表达*/
	double side2 = sqrt(pow((x1 - x3),2) + pow((y1 - y3),2));
	double side3 = sqrt(pow((x2 - x3),2) + pow((y2 - y3),2));
	if(side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
	{
		double L =  side1 + side2 + side3;
		double p = L / 2.0;
		double A = sqrt(p * (p - side1) * (p - side2) * (p - side3)); /*海伦公式*/
		printf("L = %.2lf, A = %.2lf", L, A);
	}
	else
	{
		printf("Impossible\n");
	}
	return 0;
}