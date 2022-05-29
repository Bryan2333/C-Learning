//利用函数求两个数的最大值

#include <stdio.h>
int FindMax(int, int);

int main(void)
{
    int num1, num2;
    printf("Please enter num1 = ");
    scanf("%d", &num1);
    printf("Please enter num2 = ");
    scanf("%d", &num2);
    printf("Max = %d\n", FindMax(num1,num2));
    return 0;
}

int FindMax(int num1, int num2)
{
    int max = num1;
    if(num2 > max)
    {
        max = num2;
    }
    return max;
}