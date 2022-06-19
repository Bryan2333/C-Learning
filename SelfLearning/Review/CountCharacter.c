//统计字符

#include <stdio.h>

int main(void)
{
    int letter = 0, blank = 0, digit = 0, other = 0;

    char ch;

    for(int i = 0; i < 10; i++)
    {
        scanf("%c", &ch);
        if((ch >= 'a' && ch <= 'z' )|| (ch >= 'A' && ch <= 'Z'))
        {
            letter++;
        }
        else if(ch >= '0' && ch <= '9')
        {
            digit++;
        }
        else if(ch == ' ' || ch == '\n')
        {
            blank++;
        }
        else
        {
            other++;
        }
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d\n", letter, blank, digit, other);
    return 0;
}