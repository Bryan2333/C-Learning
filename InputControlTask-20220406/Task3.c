//求给定精度的简单交错序列部分和
#include <stdio.h>

int main(void){
    int eps, digit = 0, sum = 0, i = 0;
    scanf("%d", &eps);
    do{
        digit = eps % 10;
        sum = sum + digit;
        i++;
        eps = eps / 10;
    }while(eps > 0);
    printf("%d %d\n", i, sum);
    return 0;
}