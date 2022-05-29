//利用for循环输出特定条件的整数

#include <stdio.h>

int main(void)
{
    int count;
    for(count = 2; count <= 10; count+=2)
    {
        if(count % 3 != 0)
        {
            printf("%d ", count);
        }
    }
    printf("\n");
    return 0;
}