//利用函数查找星期

#include <stdio.h>
#include <string.h>

#define MAXS 80

int getindex( char *s );

int main()
{
    int n;
    char s[MAXS];
    
    scanf("%s", s);
    n = getindex(s);
    if ( n==-1 ) printf("wrong input!\n");
    else printf("%d\n", n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int getindex( char *s )
{
    int weekDay;
    char *days[7] = {
        "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday",
        "Saturday"};
    for(weekDay = 0; weekDay <= 6; weekDay++)
    {
        if(strcmp(s, days[weekDay]) == 0) //调用strcmp来对比字符串 
        {
            break;
        }
    }
    if(weekDay == 7)
        weekDay = -1;
    return weekDay;
}