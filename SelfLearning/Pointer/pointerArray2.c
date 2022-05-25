//利用指针遍历数组
#include <stdio.h>

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int * n;
    for(n = a; n != &a[5]; n++) // n = &a[0]
    {
        printf("%d ", *n);
    }
    printf("\n");
    return 0;
}