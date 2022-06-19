//本题要求将给定的n个整数从大到小排序后输出。
//输入第一行给出一个不超过10的正整数n。第二行给出n个整数，其间以空格分隔。
//在一行中输出从大到小有序的数列，相邻数字间有一个空格，行末不得有多余空格。

#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    int array[N];
    
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }

    //泡沫排序法 从大到小排序
    for(int i = 0; i < N-1; i++)
    {
        for(int j = 0; j < N-1; j++)
        {
            if(array[j] < array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    
    for(int i = 0; i < N; i++)
    {
        if(i < N-1)
        {
            printf("%d ", array[i]);
        }
        else if(i == N-1)
        {
            printf("%d", array[i]);
        }
    }
    
    return 0;
}