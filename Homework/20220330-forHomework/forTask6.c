/* 求交错序列前N项和 */
#include <stdio.h>

int main(void){
    int down, n, sign = 1;
    double sum = 0;
    scanf("%d", &n);
    for(double i = 1; i <= n; ++i)
    {
        down =  2 * i - 1;
        sum = sum + sign * (i / down);
        sign = -sign;
    }
    printf("%.3lf", sum);
    return 0;
}