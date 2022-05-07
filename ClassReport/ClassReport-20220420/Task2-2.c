#include <stdio.h>

int main(void){
    int a, b, r;
    scanf("%d %d", &a, &b);
    if(a < b){
        int temp = a;
        a = b;
        b = temp;
    }
    while(r != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    printf("最大公约数为%2d\n", a);
    return 0;
}