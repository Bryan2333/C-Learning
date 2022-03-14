#include <stdio.h>

int main(void){
    int num1;
    printf("num1 = ");
    scanf("%d", &num1);
    int hundreds = num1 / 100; /* 先求出百位数 */
    int ones = num1 % 10; /* 接着求出个位数 */
    int tens = (num1 - 100 * hundreds) / 10; /* 再出十位数 */
    int sum = ones + tens + hundreds; /* 最后算出各个位数之和 */
    printf("百位数为%d,十位数为%d,个位数为%d.\n", hundreds, tens, ones);
    printf("各个位数之和为%d.\n", sum);
    return 0;
}