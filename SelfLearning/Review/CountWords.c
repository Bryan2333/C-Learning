//统计一行文本的单词个数
//flag = 0 表示前一个字符为空格，flag = 1 表示前一个字符为字母或标点符号

#include <stdio.h>

int main(void)
{
    char input[100];

    int cnt = 0, flag = 0;
    gets(input);

    for(int i = 0; input[i] != '\0'; i++)
    {
        if(input[i] == ' ')
        {
            flag = 0;
        }
        else if(flag == 0)
        {
            flag = 1;
            cnt++;
        }
    }

    printf("%d\n", cnt);
    return 0;
}