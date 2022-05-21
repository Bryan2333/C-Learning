//在函数中运用指针传递数组
#include <stdio.h>
int maxv(int *, int N);

int main(void)
{
    int a[3] = {3, 6, 9};
    printf("Max of array a = %d\n", maxv(&a[0], 3));
    int b[5] = {1, 6, 100, 2, 3};
    printf("Max of array b = %d\n", maxv(&b[0], 5));
    return 0;
}

int maxv(int *v, int N)
{
    int max = *v;
    for(int i = 0; i < N; i++)
    {
        if(*(v+i) > max)
        {
            max = *(v+i);
        }
    }
    return max;
}