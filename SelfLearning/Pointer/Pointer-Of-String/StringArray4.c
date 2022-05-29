// 判断scanf是否成功读取数据
// 如果scanf成功读取数据，会回传1。如果读取失败，会回传0

#include <stdio.h>

int main(void)
{
    int number;
    printf("number = ");
    // if(scanf("%d", &number) == 1)
    // {
    //     printf("number = %d\n", number);
    // }
    // else if(scanf("%d", &number) == 0)
    // {
    //     printf("Error: Invalid Input!\n");   
    // }
    while(scanf("%d", &number) != 1)
    {
        printf("Error: Invalid Input!\n");
    }
    printf("number = %d", number);
    return 0;
}