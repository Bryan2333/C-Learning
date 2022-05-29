//while循环 猜数游戏带次数

#include <stdio.h>

int main(void)
{
    int answer = 5, count = 0, guess;
    //count初始值为0，所以用户至少会猜一次
    while(count == 0 || guess != answer) 
    {
        printf("Please enter your guess = ");
        scanf("%d", &guess);
        count++;
        if(guess > answer)
        {
            printf("Too Big!\n");
        }
        else
        {
            printf("Too Small!\n");
        }
    }
    printf("Correct! (%d)\n", count);
    return 0;
}