// 任务7 
#include <stdio.h>

int main(void){
    int y = 0;
    for(int i = 10; i < 100; ++i)
    {   
        int isPrime = 1; //默认是素数
        for(int j = 2; j < i; ++j)
        {
            if(i % j == 0)
            {
                isPrime = 0; //不是素数
            }
        }
        if(isPrime == 1)
        {
            printf("%d ", i);
            y++;
        }
        if(y == 5)
        {
            printf("\n");
            y = 0;
        }
    }
    printf("\n");
    return 0;
}