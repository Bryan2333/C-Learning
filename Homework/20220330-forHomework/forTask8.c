//大笨钟
#include <stdio.h>

int main(void){
    int hour, minute;
    scanf("%d:%d", &hour, &minute);
    if(0 <= hour && hour <= 12)
    {
        printf("Only %02d:%02d.  Too early to Dang.\n", hour, minute);
    }
    else if(12 < hour && hour <= 23)
    {
        hour = hour - 12; //12小时制
        if(minute == 0) //若为整点
        {
            for(int i = 0; i < hour; ++i )
            {
                printf("Dang");
            }
        }
        else if(minute != 0) //若不是整点
        {
            for(int i = 0; i < hour + 1; ++i)
            {
                printf("Dang");
            }
        }
    }
    return 0;
}