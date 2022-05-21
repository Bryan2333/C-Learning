//利用指针给数字排序
#include <stdio.h>
void ExNum(int *, int *);
void sort(int *, int *);

int main(void)
{
    int num1, num2;
    printf("Enter num1 and num2: ");
    scanf("%d%d", &num1, &num2);
    sort(&num1, &num2);
    printf("num1 = %d\nnum2 = %d", num1, num2);
    return 0;
}

void sort(int *num1, int *num2)
{
    if(*num1 > *num2)
    {
        ExNum(num1, num2); //将两给数字的地址传给ExNum
    }
}

void ExNum(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}