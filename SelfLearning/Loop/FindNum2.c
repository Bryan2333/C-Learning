//今有物不知其数，三三数之剩二；五五数之剩三；七七数之剩二。问物几何?
//求指定范围内的符合条件数字的最大值

#include <stdio.h>

int main(void)
{
    int number, max, maxMatch = 0;
    printf("max = ");
    scanf("%d", &max);
    for(number = max; number >= 1; --number)
    {
        if(number % 3 == 2 && number % 5 ==3 && number % 7 == 2)
        {
            maxMatch = number;
            break;
        }
    }
    if(maxMatch == 0)
    {
        printf("没有符合条件的数字！\n");
    }
    else
    {
        printf("%d\n", maxMatch);
    }
    return 0;
}