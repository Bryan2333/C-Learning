//用for循环输出等差数列

#include <stdio.h>

int main(void)
{
    int diff, beginNum, endNum;
    printf("请输入公差：");
    scanf("%d", &diff);
    printf("请输入首项 末项：");
    scanf("%d %d", &beginNum, &endNum);
    for(int i = beginNum; i <= endNum; i += diff)
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}