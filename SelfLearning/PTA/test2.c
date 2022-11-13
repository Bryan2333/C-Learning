#include <stdio.h>
#include <math.h>

int main(void)
{ 
    double liNum[1000] = {0};
    double pingNum[1000] = {0};

    int j = 0;
    double sq;
    for (double i = 1; i <= 1000000; i++)
    {
        sq = sqrt(i);
        if (sq == (int)sq)
        {
            pingNum[j] = i;
            j++;
        }
    }

    int pingCount = j;
    // for (int i = 0; i < pingCount; i++)
    // {
    //     printf("%lf\n", pingNum[i]);
    // }
    j = 0;
    // printf("%d\n", pingCount);
    double cb;
    for (double i = 1; i <= 1000000; i++)
    {
        cb = cbrt(i);
        if (cb == (int)cb)
        {
            liNum[j] = i;
            j++;
        }
    }
    int liCount = j;
    // printf("%d\n", liCount);
    // for (int i = 0; i < liCount; i++)
    // {
    //     printf("%lf\n", liNum[i]);
    // }

    double same[100];

    int k = 0;
    for (int i = 0; i < pingCount; i++)
    {
        for (int j = 0; j < liCount; j++)
        {
            if (pingNum[i] == liNum[j])
            {
                same[k] = pingNum[i];
                k++;
            }
        }
    }

    for (int i = 0; i < k; i++)
    {
        printf("%.0lf\n", same[i]);
    }
    printf("%d\n", k);

    return 0;
}