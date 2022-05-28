//骰子点数出现次数统计

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int i;
    for(i = 0; i < 6000; i++)
    {
        int dice = rand() % 6 + 1;
    }
    return 0;
}