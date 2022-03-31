//求分数序列前N项和
#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    double temp, sum = 0, down = 1, up = 2;
    for(double i = 1; i <= n; i++)
    {
        sum = sum + up / down;
        temp = down;
        down = up; //分母是前一项的分子
        up = temp + up; //分子是前一项分子与分母的和
    }
    printf("%.2lf", sum);
    return 0;
}