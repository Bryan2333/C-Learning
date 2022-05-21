//利用指针交换数值
#include <stdio.h>
void ExNum(int *, int *);

int main(void)
{
    int num1, num2;
    printf("Enter num1 and num2: ");
    scanf("%d%d", &num1, &num2);
    ExNum(&num1, &num2);
    printf("num1 = %d\nnum2 = %d", num1, num2);
    return 0;
}

void ExNum(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}