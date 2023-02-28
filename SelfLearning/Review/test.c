//统计一个数字中某个0~9的数字的出现次数
#include <stdio.h>

int main(void)
{
    int num, target, count = 0;
    scanf("%d %d", &num, &target);

    if(num < 0)
    {
        num = -num;
    }
    do
    {
        int digit = num % 10;
        if(digit == target)
        {
            count++;
        }  
        num = num / 10;
    }while(num > 0);
    printf("%d\n", count);
    return 0;
}