#include <stdio.h>
void badFunction();

int main(void)
{
    badFunction();
    return 0;
}

void badFunction()
{
    int x = 100;
    badFunction();
}