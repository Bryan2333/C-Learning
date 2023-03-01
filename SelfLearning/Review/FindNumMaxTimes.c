//找出数组中出现次数最多的数字及其出现次数

#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int array[n], times[n];
    
    //将数字存入数组并将计数器初始化为0
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &array[i]);
        times[i] = 0;
    }

    //统计每一个数字的出现次数
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            if(array[i] == array[j])
            {
                times[i]++;
            }
        }
    }
    
    //寻找计数器中次数最大的数
    int max_id = 0;
    for(int i = 0; i < n; ++i)
    {
        if(times[i] > times[max_id]||(times[i] == times[max_id] && i < max_id))
        {
            max_id = i;
        }
    }
    
    printf("%d %d\n", array[max_id], times[max_id]);
    return 0;
}