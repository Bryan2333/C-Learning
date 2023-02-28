// 使用函数求最大公约数 
#include <stdio.h>

int gcd(int x, int y);

int main()
{
    int x, y;
    
    scanf("%d %d", &x, &y);
    printf("%d\n", gcd(x, y));
    
    return 0;
}

/* 你的代码将被嵌在这里 */
int gcd(int x, int y)
{
    int r = 1;
    if(x < y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
    while(r != 0)
    {
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}