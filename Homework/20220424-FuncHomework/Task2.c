//找两个数中最大者 
#include <stdio.h>

int max( int a, int b );

int main()
{    
    int a, b;

    scanf("%d %d", &a, &b);
    printf("max = %d\n", max(a, b));
    
    return 0;
}

/* 你的代码将被嵌在这里 */
int max(int a, int b)
{
    int result = a;
    if(b > a)
    {
        result = b;
    }
    return result;
}