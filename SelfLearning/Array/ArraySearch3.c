//查询上限內最大数字

#include <stdio.h>

int main(void)
{
    int i, n, top;
    printf("n = ");
    scanf("%d", &n);
    int array[n];

    for(i = 0; i < n; ++i)
    {
        scanf("%d", &array[i]);
    }

    printf("top = ");
    scanf("%d", &top);

    int max_i = -1;
    for(i = 0; i < n; ++i)
    {
        //保证数字小于上限，且最大数字的序号为初始值或数字大于当前最大值
        if(array[i] <= top && (max_i == -1 || array[i] >= array[max_i])) 
        {
            max_i = i;
        }
    }   
    if(max_i != -1)
    {
        printf("范围内最大的数字为%d\n", array[max_i]);
    }

    return 0;
}