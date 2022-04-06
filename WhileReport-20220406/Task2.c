//数一个数字的位数

#include <stdio.h>

int main(void){
    int digit = 0, num;
    printf("num = ");
    scanf("%d", &num);
    if(num < 0)
    {
        num = -num;
    }
    while(num != 0)
    {
        num = num / 10;
        digit++;
    }
    printf("digit = %d\n", digit);
    return 0;
}