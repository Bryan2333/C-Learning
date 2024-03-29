#include <stdio.h>
#define MAXS 15

void StringCount( char s[] );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

/* Your function will be put here */
void StringCount( char s[] )
{
    int letter =0, blank = 0, digit = 0, other = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z'))
        {
            letter++;
        }
        else if('0' <= s[i] && s[i] <= '9')
        {
            digit++;
        }
        else if(s[i] == ' ' || s[i] == '\n')
        {
            blank++;
        }
        else
        {
            other++;
        }
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
}