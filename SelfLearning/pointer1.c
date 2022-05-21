#include <stdio.h>

int main(void){
    int a;
    int *aAddress = &a;
    printf("地方a = ");
    scanf("%d", &a);
    printf("a = %d", *aAddress);
    return 0;
}