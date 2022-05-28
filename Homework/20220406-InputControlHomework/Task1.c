//求奇数和
#include <stdio.h>

int main(void){
    int num, sum = 0;
    scanf("%d", &num);
    while(num > 0)
    {
        if(num % 2 != 0 )
        {
            sum = sum + num;
        }
        scanf("%d", &num);
    }
    printf("%d\n", sum);
    return 0;
}