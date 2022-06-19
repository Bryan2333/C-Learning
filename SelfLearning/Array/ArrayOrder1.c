//数列排序问题

#include <stdio.h>

int main(void)
{
    int n, i, j;
    printf("n = ");
    scanf("%d", &n);
    int array[n];
    
    for(i = 0; i < n; ++i)
    {
        scanf("%d", &array[i]);
    }

    for(i = 0; i < n-1; ++i)
    {
        for(j = 0; j < n-1; ++j)
        {
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    for(i = 0; i < n; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}