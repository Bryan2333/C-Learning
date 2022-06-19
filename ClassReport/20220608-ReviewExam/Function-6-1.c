//使用函数求余弦函数的近似值


#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
    
    return 0;
}

/* 你的代码将被嵌在这里 */
double funcos(double e, double x)
{
    int flag = -1;
    //x的0次方除以0等于1，所以sum初始值为1
    double sum = 1, item = 1, up = 0, mi = 2, down = 1;

    while(item > e)
    {
        // 计算分母
        for(int j = 1; j <= mi; j++)
        {
            down = down * j;
        }
        //计算分子
        up = pow(x,mi);
        item = up / down;
        sum = sum + flag * item;
        mi = mi + 2;
        flag = flag * (-1);
        down = 1;
    }
    return sum;
}