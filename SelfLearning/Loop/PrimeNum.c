//判断一个数字是否是质数

#include <stdio.h>

int main(void)
{
    int num, isPrime;
    printf("num = ");
    scanf("%d", &num);
    for(int i = 2; i < num; ++i)
    {
        isPrime = 1;
        if(num % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if(isPrime == 0)
    {
        printf("%d不是质数\n", num);
    }
    else if(isPrime == 1)
    {
        printf("%d是质数\n", num);
    }
    return 0;
}