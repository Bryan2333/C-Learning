// 任务6
#include <stdio.h>

int main(void){
    int isPrime = 1, num;
    printf("num = ");
    scanf("%d", &num);
    for(int j = 2; j < num; ++j)
    {
        if(num % j == 0)
        {
            isPrime = 0;
            printf("%d不是素数\n", num);
            break;
        }
    }
    if(isPrime == 1)
    {
        printf("%d是素数\n", num);
    }
    return 0;     
}