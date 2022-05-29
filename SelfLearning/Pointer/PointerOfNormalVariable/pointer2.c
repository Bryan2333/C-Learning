//利用指针使数值增加
#include <stdio.h>
void addone(int *n)
{
    *n = *n + 1;
}

int main(void)
{
    int a;
    printf("a = ");
    scanf("%d", &a);
    addone(&a);
    printf("a = %d\n", a);
    return 0;
}