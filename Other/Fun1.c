//计算长方形面积
#include <stdio.h>
double area(double a, double b);

int main(void){
    double S, length, width;
    printf("请输入长方形的长和宽：");
    scanf("%lf %lf", &length, &width);
    S = area(length, width);
    printf("S = %.3lf\n", S);
    return 0;
}

double area(double a, double b){
    double result;
    result = a * b;
    return result;
}
