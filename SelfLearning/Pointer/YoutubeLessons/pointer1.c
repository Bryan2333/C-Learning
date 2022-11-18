#include <stdio.h>

int main(void)
{
    int a = 10;

    int *p;
    p = &a;

    printf("address of p is %lu\n", p);
    // p+1 实际上是访问 p 的下一个整数，所以实际会加4
    printf("value at address p is %d\n", *p);
    printf("address of p+1 is %lu\n", p+1);
    printf("value at address p+1 is %d\n", *(p+1));
    return 0;
}