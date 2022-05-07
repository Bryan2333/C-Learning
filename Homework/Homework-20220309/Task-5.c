/* 计算阴影面积 */
#include <stdio.h>

int main(void){
    int a,b,c;
    scanf("%d%d",&a,&b);
    c = 5000 - 0.5 * a * b - 0.5 * (100-a) * (100-b) - (100-a) * b;
    printf("%d\n",c);
    return 0;
}