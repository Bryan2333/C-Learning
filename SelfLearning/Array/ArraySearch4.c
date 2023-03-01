//查询最接近数字

#include <stdio.h>
#include <math.h>

int main(void)
{
    int i, n, target, MinDistance, close_id = 0;

    printf("n = ");
    scanf("%d", &n);
    int array[n];
    for(i = 0; i < n; ++i)
    {
        scanf("%d", &array[i]);
    }

    while(1)
    {
        printf("Q: ");
        scanf("%d", &target);
        if(target == 0)
        {
            break;
        }
        for(i = 0, MinDistance = -1; i < n; ++i)
        {
            int distance = abs(array[i] - target);
            //MinDistance == -1是指第一次循环运行
            if(MinDistance == -1 || distance <= MinDistance)
            {
                close_id = i;
                MinDistance = distance;
            }
        }
        printf("Answer: %d\n", array[close_id]);
    }

    return 0;
}