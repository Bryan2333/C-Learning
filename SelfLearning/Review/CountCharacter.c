//统计字符

#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    int letter = 0, blank = 0, digit = 0, other = 0;
    char ch;
    scanf("%c", &ch);
    for(int i = 0; i < N; i++)
    {
        scanf("%c", &ch);
        if(('a' <= ch && ch <= 'z' )|| (ch >= 'A' && ch <= 'Z'))
        {
            letter++;
        }
        else if('0' <= ch && ch <= '9')
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