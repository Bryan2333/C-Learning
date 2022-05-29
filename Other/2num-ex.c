#include <stdio.h>

int main(){
    int num1, num2; /* 定义num1, num2 */
    printf("num1 = ");
    scanf("%d", &num1); /* 从键盘读取num1的数值 */
    printf("num2 = ");
    scanf("%d", &num2); /* 从键盘读取num2的数值 */
    int temp = num1; /* 将num1的数值备份到temp中 */
    num1 = num2;
    num2 = temp; /* 将temp的数值赋予给num2 */
    printf("num1 = %d, num2 = %d.\n", num1, num2);
    return 0;
}