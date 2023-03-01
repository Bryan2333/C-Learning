#include <stdio.h>
int Add(int, int);
void PrintHello(char *);

int main(void)
{
    // p 是指向 Add 函数的函数指针
    int (*p)(int, int) = &Add;
    int z = (*p)(5,1);

    printf("z = %d\n", z);

    void (*p1)(char *) = &PrintHello;
    (*p1)("Zhangsan");
    return 0;
}

int Add(int x, int y)
{
    return x + y;
}

void PrintHello(char *name)
{
    printf("Hello, %s\n", name);
}