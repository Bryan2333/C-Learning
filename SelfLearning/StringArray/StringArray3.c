//用户从键盘输入内容，按下回车后内容会存入到stdin，程序再从stdin中读取内容

#include <stdio.h>
void str_read(char[]);

int main(void)
{
    char str[15];
    str_read(str);
    printf("%s\n", str);
    return 0;
}

void str_read(char str[])
{
    // char ch;
    int i = 0;
    while(1)
    {
        scanf("%c", &str[i]);
        if(str[i] == '\n')
        {
            break;
        }
        i++;
    }
    str[i] = '\0';
}