//利用while打印从M到N的数字

#include <stdio.h>

int main(void)
{
    int M, N;
    printf("Please enter the number M: ");
    scanf("%d", &M);
    printf("Please enter the number N: ");
    scanf("%d", &N);
    while(M <= N)
    {
        printf("%d ", M);
        M++;
    }
    printf("\n");
    return 0;
}