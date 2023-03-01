// 使用函数求Fibonacci数
#include <stdio.h>

int fib( int n );

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", fib(n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int fib(int n)
{
    int result;
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        result = fib(n - 2) + fib(n - 1);
        return result;
    }
}