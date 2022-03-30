//输出闰年
#include <stdio.h>

int main(void){
    int targetYear, count = 0;
    scanf("%d", &targetYear);
    if(targetYear > 2000 && targetYear <= 2100)
    {
        for(int begin = 2001; begin <= targetYear; begin++)
        {
            if((begin % 4 == 0 && begin % 100 != 0) || (begin % 400 ==0))
            {
                count++;
                printf("%d\n", begin);
            }
        }
        if(count == 0)
        {
        printf("None\n");
        }
    }
    else
    {
        printf("Invalid year!\n");
    }
    return 0;
}