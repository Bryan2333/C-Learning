//求简易整数方程的解

#include <stdio.h>

int main(void)
{
    int num1, num2;
    for(num1 = 1; num1 <= 30; ++num1)
    {
        // for(num2 = 1; num2 <= 30; ++num2)
        // {
        //     if(num1+num2 == 30 && num1*num2 == 221 && num1 <= num2)
        //     {
        //         printf("num1 = %d, num2 = %d\n", num1, num2);
        //         break;
        //     }
        // }
        num2 = 30 - num1;
        if(num1*num2 == 221 && num1 <= num2)
        {
            printf("num1 = %d, num2 = %d\n", num1, num2);
            break;
        }
    }
    return 0;
}