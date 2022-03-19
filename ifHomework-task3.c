//if作业第三题

#include <stdio.h>

int main(void){
    double weight, height;
    scanf("%lf%lf", &weight, &height);
    double result = weight / (height * height);
    printf("%.1f\n", result); /* 取一位小数 */
    if(result > 25){
        printf("PANG\n");
    }
    else{
        printf("Hai Xing\n");
    }
    return 0;
}