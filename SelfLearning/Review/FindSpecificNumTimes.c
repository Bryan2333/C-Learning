//使用函数统计指定数字的个数

#include <stdio.h>

int CountDigit( int number, int digit );
    
int main(void)
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));
    
    return 0;
}

/* 你的代码将被嵌在这里 */
int CountDigit(int number, int digit)
{
    int times = 0, eps = 0;
    if(number == 0) //如果数字为零
    {
        times = 1;
    }
    else if(number < 0) //将负数转为正数
    {
        number = -number;
    }
    while(number > 0)
    {
        eps = number % 10;
        if(eps == digit)
        {
            times++;
        }
        number = number / 10;
    }
    return times;
}