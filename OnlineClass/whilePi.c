//利用格雷戈里公式计算pi
#include <stdio.h>
#include <math.h>

int main(void){
    double down = 1, pi = 0, eps; //down为分母 eps为精度
    int flag = 1, i = 1;
    printf("eps = ");
    scanf("%lf", &eps);
    while(fabs(1 / down) >= eps)
    {
        pi = pi + flag * 1 / down;
        down = down + 2;
        flag = -flag;
        i++;
    }
    pi = pi  * 4;
    printf("Pi = %lf\ni = %d\n", pi, i);
    return 0;
}