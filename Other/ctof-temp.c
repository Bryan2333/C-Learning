#include <stdio.h>

int main(void){
    double fahr, celsius;/*定义摄氏度和华氏度*/
    printf("Please enter the fahr temperature:  ");/*让用户输入华氏温度*/
    scanf("%lf", &fahr);/*从键盘读取华氏温度的大小*/
    celsius = (5 * (fahr - 32)) / 9; /* 华氏温度转换摄氏温度 */
    printf("The celsius temperature is  %lf.\n", celsius); /* 显示摄氏温度 */
    return 0;
}