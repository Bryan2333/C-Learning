#include <stdio.h>

int main(void){
    int discount;
    double price;
    scanf("%lf %d", &price, &discount);
    double result = price * discount / 10; /* 计算出最后的价格 */
    printf("%.2lf\n", result);
    return 0;
}