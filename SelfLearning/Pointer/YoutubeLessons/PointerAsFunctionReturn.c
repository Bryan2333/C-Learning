#include <stdio.h>
#include <stdlib.h>
int *Add(int *, int *);

int main(void)
{
    int x = 2;
    int y = 4;
    int *z = Add(&x, &y);

    printf("%d\n", *z);

    free(z);

    return 0;
}

int *Add(int *a, int *b)
{
    // 返回堆中的内存地址
    // 本地变量在函数完成后，会被释放掉
    int *c = (int *)(malloc(sizeof(int)));
    *c = (*a) + (*b);
    return c;
}