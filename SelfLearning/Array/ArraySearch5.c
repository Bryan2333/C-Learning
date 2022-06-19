//求小范围内的众数

#include <stdio.h>

int main(void)
{
    int times[10] = {0}, n;
    printf("n = ", times);
    scanf("%d", &times);
    
    for(int i = 1; i <= 10; ++i)
    {
        scanf("%d", &n);
        ++times[n];
    }

    int ans = 0;
    for(n = 0; n < 10; ++n)
    {
        if(times[n] >= times[ans] )
        {
            ans = n;
        }
    }

    printf("Ans: %d", ans);
}