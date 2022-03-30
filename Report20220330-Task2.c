#include <stdio.h>

int main(void){
    int sign = 1, n; 
    double sum = 0;
    for(int i = 1; i <= 100; i++)
    {
        sum = sum + sign * 1.0 / i;
        sign = sign * (-1);
    }
    printf("Sum = %lf", sum);
    return 0;
}
