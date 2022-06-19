/* 程序每次读入一个正3位数，然后输出按位逆序的数字。
注意：当输入的数字含有结尾的0时，输出不应带有前导的0。比如输入700，输出应该是7。 */

#include <stdio.h>

int main(void)
{
    int num1;
    scanf("%d", &num1);

    int array[3];
    array[0] = num1 / 100;
    array[1] = num1 % 100 / 10;
    array[2] = num1 % 10;

    if (array[2] == 0 && array[1] == 0) //整百数
    {
        printf("%d", array[0]);
    }
    else if(array[2] == 0) //末尾为零的非整百三位数数
    {
        for(int i = 1; i >= 0; i--) 
        {
            printf("%d", array[i]);
        }
    }
    else //一般三位数
    {
        for(int i = 2; i >= 0; i--)
        {
            printf("%d", array[i]);
        }
    }

    return 0;
}