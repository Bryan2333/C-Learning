#include <stdio.h>
long long fib(int);

int main(void) 
{
    long long result = fib(100);
    printf("%lld", result);
    return 0;
}

long long fib(int n) 
{
    long long first = 1;
    long long  second = 1;
    long long third;

    for (int i = 0; i < n-2; i++)
    {
        third = first + second;
        first = second;
        second = third;
    }
    return third;
    
}