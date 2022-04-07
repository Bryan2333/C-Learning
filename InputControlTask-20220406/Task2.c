//求给定精度的简单交错序列部分和
#include <stdio.h>
#include <math.h>

int main(void){
    double eps, sum = 0, item = 1.0;
    int flag = 1, down = 1;
    scanf("%lf", &eps);
    do{
        item = flag * 1.0 / down;
        sum = sum + item;
        flag = -flag;
        down = down + 3;
    }while(fabs(item) > eps);
    printf("sum = %.6lf\n", sum);
    return 0;
}