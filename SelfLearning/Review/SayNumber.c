/* 输入一个整数，输出每个数字对应的拼音。当整数为负数时，先输出fu字。
输入在一行中给出一个整数，如：1234。 提示：整数包括负数、零和正数。
输出格式：在一行中输出这个整数对应的拼音，每个数字的拼音之间用空格分开，行末没有最后的空格。
如 yi er san si。 */

#include <stdio.h>

int main(void)
{
    char num;
    scanf("%c", &num);
    while(num != '\n')
    {
        switch(num)
        {
            case '-':
                printf("fu"); break;
            case '0':
                printf("ling"); break;
            case '1':
                printf("yi"); break;
            case '2':
                printf("er"); break;
            case '3':
                printf("san"); break;
            case '4':
                printf("si"); break;
            case '5':
                printf("wu"); break;
            case '6':
                printf("liu"); break;
            case '7':
                printf("qi"); break;
            case '8':
                printf("ba"); break;
            case '9':
                printf("jiu"); break;
                
        }
        scanf("%c", &num);
        if(num != '\n')
        {
            printf(" ");
        }
    }
    return 0;
}

