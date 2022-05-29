//while循环 猜数游戏

#include <stdio.h>

int main(void)
{
    int answer = 5;
    int guess, count = 0;
    printf("Please enter your guess = ");
    scanf("%d", &guess);
    count++;
    while(guess != answer)
    {
        if(guess > answer)
        {
            printf("Too Big!\n");
        }
        else
        {
            printf("Too Small!\n");
        }
        printf("Please enter your guess = ");
        scanf("%d", &guess);
        count++;
    }
    printf("Correct!\n"); //正确只有一次，可以移出while循环
    return 0;
}