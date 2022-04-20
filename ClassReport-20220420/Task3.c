#include <stdio.h>

int main(void){
    int num1, num2, isPrime = 1, primeSum = 0, primeNum = 0;
    //默认是素数 
    scanf("%d %d", &num1, &num2);
    for(int i = num1; i < num2; i++)
    {   
        isPrime = 1;
        for(int j = 2; j < i; j++)
        {
            if( i % j == 0)
            {
                isPrime = 0; //不是素数
            }
        }
        if(isPrime == 1)
        {   
            printf("%d\n", i);
            primeSum = primeSum + i;
            primeNum++;
        }
    }
    printf("素数个数为%d 总和为%d\n", primeNum, primeSum);
    return 0;
}