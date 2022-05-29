//今有物不知其数，三三数之剩二；五五数之剩三；七七数之剩二。问物几何?
//求指定范围内所有符合条件的数字

#include <stdio.h>

int main(void)
{
    int count, max, min;
    printf("min = ");
    scanf("%d", &min);
    printf("max = ");
    scanf("%d", &max);
    for(count = min; count <= max; ++count)
    {
        if(count % 3 == 2 && count % 5 ==3 && count % 7 == 2)
        {
            printf("%d ", count);
        }
    }
    printf("\n");
    return 0;
}