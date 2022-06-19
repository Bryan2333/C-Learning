//生成随机数字

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
    int a, countUnused = 1, numUsed = 0, countUsed = 0, ifUsed = 0;
    int array[48];

    printf("请输入使用过的学号：");
    while(numUsed >= 0)
    {
        scanf("%d", &numUsed);
        array[countUsed] = numUsed;
        countUsed++;
    }

    srand(time(0));
    while(countUnused <= 10)
    {
        a = rand() % 48 + 1;
        for(int i = 0; i < 48; i++)
        {
            if(a == array[i])
            {
                ifUsed = 1;
            }
        }
        if(ifUsed == 1)
        {
            continue;
        }
        printf("%d ", a);
        countUnused++;
    }
    printf("\n");
    return 0;
}