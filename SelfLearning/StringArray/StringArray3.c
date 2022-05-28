//用户从键盘输入内容，按下回车后内容会存入到stdin，程序再从stdin中读取内容

#include <stdio.h>
// void str_read(char[]);
void str_read(char[], int);


int main(void)
{
    char str[15]; //在输入字符串之前要决定好字符串的缓冲区大小
    str_read(str, 14);
    printf("%s\n", str);
    return 0;
}

void str_read(char str[], int n)
{
    // char ch;
    int i = 0;
    // while(1)
    // {
    //     scanf("%c", &str[i]);
    //     if(str[i] == '\n') //scanf从stdin中读到最后一个字符为'\n'时终止循环
    //     {
    //         break;
    //     }
    //     i++;
    // }
    for(i = 0; i < n; i++)
    {
        scanf("%c", &str[i]);
        if(str[i] == '\n')
        {
            break;
        }
    }
    str[i] = '\0'; //将最后一个字符改为'\0'
}