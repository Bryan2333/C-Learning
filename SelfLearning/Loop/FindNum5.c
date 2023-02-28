//找出一个数所有的正因数

#include <stdio.h>

int main(void)
{
    int num, divide;
    printf("num = ");
    scanf("%d", &num);
    for(divide = 1; divide <= num; ++divide)
    {
        if(num % divide == 0)
        {
            printf("%d ", divide);
        }
    }
    printf("\n");
    return 0;
}