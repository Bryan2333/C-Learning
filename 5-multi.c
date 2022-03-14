#include <stdio.h>

int main(void){
    int x;
    printf("Please enter x: ");
    scanf("%d", &x);
    int test = x % 5;
    if (test == 0){
        printf("x是5的倍数.\n");
    }
    else{
        printf("x不是5的倍数.\n");
    }
    return 0;
}