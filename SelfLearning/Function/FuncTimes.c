//骰子点数出现次数统计

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(0));
    
    //初始化数列
    int counter[6] = {0}; 
    
    //随机生成六个数字
    for(int i = 1; i <= 6000; ++i)
    {
        int dice = rand() % 6 + 1;

        for(int j = 1; j <= 6; ++j)
        {
            if(dice == j)
            {
                counter[j-1]++;
            }
        }
    }
    
    for(int i = 1; i <= 6; ++i)
    {
        printf("%d: %d\n", i, counter[i-1]);
    }

    return 0;
}