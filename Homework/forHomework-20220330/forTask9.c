//找出三位水仙花数
#include <stdio.h>
#include <math.h>

int main(void){
    int num1, num2, ones, tens, hundreds, total;
    scanf("%d %d", &num1, &num2);
    if(100 <= num1 && num1 <= num2 && num2 <= 999 )
    {
        for(int i = num1; i <= num2; i++)
        {
            hundreds = i / 100;
            tens = i / 10 % 10;
            ones = i % 10;
            total = pow(hundreds,3) + pow(tens,3) + pow(ones,3);
            if(i == total)
            {
                printf("%d\n", i);
            }
        }
    }
    else
    {
        printf("Invalid Value.\n");
    }
    return 0;
}