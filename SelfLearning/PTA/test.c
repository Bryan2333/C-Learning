#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct linum
{
    double Data;
    struct linum *next;
} li;

typedef struct pingnum
{
    double Data;
    struct pingnum *next;
} ping;

int main(void)
{

    ping *firstPing = (ping *)(malloc(sizeof(ping)));
    ping *tempPing = firstPing;

    double sq;
    for (double i = 1; i <= 1000000; i++)
    {
        sq = sqrt(i);
        if (sq == (int)sq) 
        {
            tempPing->Data = i;
            ping *nextPing = (ping *)(malloc(sizeof(ping)));
            nextPing->Data = 0;
            tempPing->next = nextPing;
            tempPing = nextPing;
        }
    }

    // printf("以下为完全平方数\n");
    tempPing = firstPing;
    // while (tempPing != NULL && tempPing->Data != 0)
    // {
    //     printf("%lf\n", tempPing->Data);
    //     tempPing = tempPing->next;
    // }

    li *firstLi = (li*)(malloc(sizeof(li)));
    li *tempLi = firstLi;

    for (double i = 1; i <= 1000000; i++)
    {
        sq = cbrt(i);
        if (sq == (int)sq)
        {
            tempLi->Data = i;
            li *nextLi = (li*)(malloc(sizeof(li)));
            nextLi->Data = 0;
            tempLi->next = nextLi;
            tempLi = nextLi;
        }
    }

    // printf("\n以下为完全立方数\n");
    tempLi = firstLi;
    // while (tempLi != NULL && tempLi->Data != 0)
    // {
    //     printf("%lf\n", tempLi->Data);
    //     tempLi = tempLi->next;
    // }

    double same[100];
    int k = 0;
    while (tempPing != NULL && tempPing->Data != 0)
    {
        while (tempLi != NULL && tempLi->Data != 0)
        {
            if (tempPing->Data == tempLi->Data)
            {
                same[k] = tempPing->Data;
                k++;
            }
            tempLi = tempLi->next;
        }
        tempLi = firstLi;
        tempPing = tempPing->next;
    }

    for (int i = 0; i < k; i++)
    {
        printf("%0.lf\n", same[i]);
    }
    
    return 0;
}