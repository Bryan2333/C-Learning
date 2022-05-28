//计算一组数字的平均差
#include <stdio.h>
#include <math.h>

int main(void){
    int n;
    double sumSqrt = 0, Avg, sum = 0;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) //计算总和以及平均值
    {
        scanf("%d", &a[i]);
        sum +=a[i];
        Avg = sum / n * 1.0;
    }
    for(int i = 0; i < n; i++) //计算方差
    {
        sumSqrt += pow((a[i] - Avg),2);
    }
    double avgSqrt = sqrt(sumSqrt/n); //计算平均差
    printf("%.5lf\n", avgSqrt);
    return 0;
    double sumSqrt = 0, Avg, sum = 0;
    scanf("%d", &n);
}
