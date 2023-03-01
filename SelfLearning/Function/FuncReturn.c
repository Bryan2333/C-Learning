//函数回传

#include <stdio.h>
int f(int);

int main(void)
{
    printf("%d", f(0));
    return 0;
}

int f(int i)
{
    if(i == 2)
    {
        return i;
    }
    return f(i+1);
}
