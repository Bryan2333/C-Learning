/* 程序每次读入一个正3位数，然后输出按位逆序的数字。 */
#include <stdio.h>

int main(void){
    int num;
    scanf("%d", &num);
    int hundreds = num / 100; 
    int ones = num % 10; 
    int tens = (num - 100 * hundreds) / 10;
    printf("%d%d%d\n",ones, tens,hundreds);
    return 0;
}