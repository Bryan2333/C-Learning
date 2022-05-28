#include <stdio.h>

int main(void){
    int arrayLength, test, found = 0; //默认设定没有该数字
    scanf("%d %d", &arrayLength, &test);
    int a[arrayLength];
    for(int i = 0; i < arrayLength; i++)
    {
        scanf("%d", &a[i]);
        if(test == a[i])
        {
            printf("%d\n", i);
            found = 1; //有该数字
            break;
        }
    }
    if(found == 0) //如果没有这个数字
    {
        printf("Not Found\n");
    }
    return 0;
}
