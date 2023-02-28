//利用rand函数生成随机数字

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    srand(time(0));
    int i;
    for(i = 0; i < 5; ++i)
    {
        printf("%d\n", rand());
    }
    return 0;
}