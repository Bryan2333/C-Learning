//求不定个整数的和以及平均

#include <stdio.h>

int main(void)
{
    int inputNum, sum = 0, count = 0;
    printf("Please enter the numbers (quit: 0): ");
    scanf("%d", &inputNum);
    
    while(inputNum != 0)
    {
        sum = sum + inputNum;
        count++;
        scanf("%d", &inputNum);
    }
    double average = (double)sum / count;
    
    printf("Sum = %d\n",sum);
    if(count == 0)
        printf("Average = N/A\n");
    else    
        printf("Average = %.3lf", average);
    return 0;
}