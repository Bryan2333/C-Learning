#include <stdio.h>

int main(void){
    int i, sum = 0;
    for(i = 2; i <= 100; i = i + 2)
    {
        sum = sum + i;
    }
    printf("Sum = %d", sum);
    return 0;
}
