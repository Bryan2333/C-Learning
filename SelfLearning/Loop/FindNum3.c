//今有物不知其数，三三数之剩二；五五数之剩三；七七数之剩二。问物几何?
//求指定范围内符合条件的前三小的数字

#include <stdio.h>

int main(void)
{
    int number, max, min, count = 0;
    printf("min = ");
    scanf("%d", &min);
    printf("max = ");
    scanf("%d", &max);
    for(number = min; number <= max && count < 3; ++number)
    {
        if(number % 3 == 2 && number % 5 ==3 && number % 7 == 2)
        {
            ++count;            
            printf("%d ", number);
        }
    }
    printf("\n");
    return 0;
}