//计算字符串的长度
//C语言允许字符串长度刚好等于字符串内容，但不建议这样做
#include <stdio.h>
int str_length(char str[]);

int main(void)
{
    char str[15] = "Hello World";
    printf("Length: %zu\n", sizeof(str));
    printf("Length: %d\n", str_length(str));
    return 0;
}

int str_length(char str[])
{
    int i = 0;
    while(str[i] != '\0')
    {
        ++i;
    }
    return i;
}