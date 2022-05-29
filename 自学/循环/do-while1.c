//do-while实现猜数游戏
#include <stdio.h>

int main(void)
{
    int answer = 5;
    int guess;
    do
    {
        printf("Please enter your guess: ");
        scanf("%d", &guess);
        if(guess > answer)
        {
            printf("Too Big!\n");
        }
        else if(guess < answer)
        {
            printf("Too Small!\n");
        }
    }while(guess != answer);
    printf("Correct!\n");
    return 0;
}