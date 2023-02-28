#include <stdio.h>

int main(void){
    int num, digit;
    int a[4];
    scanf("%d", &num); //用户输入数字
    for(int i = 1; i <= 4; ++i) //逆序存入数字并处理数字
    {
        digit = num % 10;
        a[4-i] = digit;
        num = num / 10;
        a[4-i] = (a[4-i] + 9) % 10;
    }
    int temp1 = a[0]; //数字位置交换
    a[0] = a[2];
    a[2] = temp1;
    int temp2 = a[1];
    a[1] = a[3];
    a[3] = temp2;
    printf("The encrypted number is ");
    for(int i = 0; i < 4; ++i) //输出数字
    {
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}
