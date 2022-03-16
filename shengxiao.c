/* 计算1900年以后出生的人的生肖 */
#include <stdio.h>

int main(void){
    int birthyear, b;
    printf("请输入您的出生年份： ");
    scanf("%d", &birthyear);
    b = birthyear % 12;
    if(b == 0){
        printf("你的生肖为猴\n");
    }
    if(b == 1){
        printf("你的生肖为鸡\n");
    }
    if(b == 2){
        printf("你的生肖为狗\n");
    }
    if(b == 3){
        printf("你的生肖为猪\n");
    }
    if(b == 4){
        printf("你的生肖为鼠\n");
    }
    if(b == 5){
        printf("你的生肖为牛\n");
    }
    if(b == 6){
        printf("你的生肖为虎\n");
    }
    if(b == 7){
        printf("你的生肖为兔\n");
    }
    if(b == 8){
        printf("你的生肖为龙\n");
    }
    if(b == 9){
        printf("你的生肖为蛇\n");
    }
    if(b == 10){
        printf("你的生肖为马\n");
    }
    if(b == 11){
        printf("你的生肖为羊\n");
    }
    return 0;
}