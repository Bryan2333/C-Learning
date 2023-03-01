#include <stdio.h>

int main(void)
{
    int a = 1025;
    int *p = NULL;

    p = &a;

    printf("Size of integer is %d bytes\n", sizeof(int));
    printf("Address = %p, Value = %d\n", p, *p);
    printf("Address = %p, Value = %d\n", p+1, *(p+1));

    //1025 == 00000000 00000000 00000100 00000001

    char *p0 = NULL;
    p0 = (char*)p;
    printf("Size of character is %d bytes\n", sizeof(char));
    printf("Address = %p, Value = %d\n", p0, *p0);

    // p0+1 访问的是下一个字节，即 00000100
    printf("Address = %p, Value = %d\n", p0+1, *(p0+1));

    // void * 是通用指针，它没有关联的数据类型
    void *p1 = NULL;
    p1 = p;
    // *p 是不允许的
    printf("Address = %p, Value = %d\n", p1, *(int *)p1);
    // p1 + 1 也是不允许的
    // printf("Address = %p\n", p1+1);
    return 0;
}