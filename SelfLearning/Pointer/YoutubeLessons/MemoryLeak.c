#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Play(int);

int cash = 100;

int main(void)
{
    int bet;
    printf("Total Cash = %d\n", cash);
    while (cash > 0)
    {
        printf("What's your bet: ");
        scanf("%d", &bet);
        if (bet == 0 || bet > cash)
        {
            break;
        }
        Play(bet);
    }
}

void Play(int bet)
{
    // char c[3] = {'J', 'Q', 'K'};
    char *c = (char *)(malloc(3 * sizeof(char)));
    *c = 'J'; 
    *(c+1) = 'Q'; 
    *(c+2) = 'K';
    printf("Shuffling......\n");
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        int x = rand() % 3;
        int y = rand() % 3;
        char temp = c[x];
        c[x] = c[y];
        c[y] = temp;
    }

    int playGuess;
    printf("What's your guess - 1, 2 or 3 : ");
    scanf("%d", &playGuess);

    if (c[playGuess - 1] == 'Q')
    {
        cash += 3 * bet;
        printf("You win ! Result = %c%c%c Total Cash = %d\n", c[0], c[1], c[2], cash);
    }
    else
    {
        cash -= bet;
        printf("You lose ! Result = %c%c%c Total Cash = %d\n", c[0], c[1], c[2], cash);
    }

    // 如果此处没有 free(c) 就会导致内存泄漏
    // 因为使用 malloc 申请的内存空间没有被回收
    free(c);
}