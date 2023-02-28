#include <stdio.h>
void increment(int *a)
{
    *a = *a + 1;
    printf("Address of a in increment is %lu\n", a);
}

int main(void)
{
    int a = 10;
    increment(&a);
    printf("a = %d\n", a);
    printf("Address of a in main is %lu\n", &a);

    return 0;
}

