//利用函数求三个数的最大值
//可以重复利用函数

#include <stdio.h>
// int FindMax(int, int, int);
int FindMax2(int, int);
int FindMax3(int, int, int);
    
int main(void)
{
    int num1, num2, num3;
    printf("Please enter num1 = ");
    scanf("%d", &num1);
    printf("Please enter num2 = ");
    scanf("%d", &num2);
    printf("Please enter num3 = ");
    scanf("%d", &num3);    
    printf("Max = %d\n", FindMax3(num1, num2, num3));
    return 0;
}

int FindMax2(int num1, int num2)
{
    int max = num1;
    if(num2 > max)
    {
        max = num2;
    }
    return max;
}

int FindMax3(int num1, int num2, int num3)
{
    return FindMax2(FindMax2(num1, num2), num3);
}