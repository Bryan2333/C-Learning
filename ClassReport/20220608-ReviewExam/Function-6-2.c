/* 本题要求实现一个简单函数，能计算给定的年份和月份的天数。
使得可以利用该函数，输出给定年份中每个月的天数。
其中1、3、5、7、8、10、12月有31天，4、6、9、11月有30天，
2月平年有28天，闰年有29天。
判断闰年的条件是：能被4整除但不能被100整除，或者能被 400 整除。*/

#include <stdio.h>

int MonthDays(int year, int month);

int main()
{
    int ndays, month, year;

    scanf("%d", &year);
    for(month = 1; month <= 12; month++){
        ndays = MonthDays(year, month);
        printf("%d ", ndays);
    }

    return 0;
}

/* 你的代码将被嵌在这里 */
int MonthDays(int year, int month)
{
    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
            break;
        case 2:
            if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            {
                return 29;
            }
            else
            {
                return 28;
            }
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
    }
}