// 奇偶分家
#include <stdio.h>

int main(void){
    int num, test, ji = 0, ou = 0;
    scanf("%d", &num);
    for(int i = 0; i < num; ++i)
    {
        scanf("%d", &test);
        if(test % 2 == 0)
        {
            ou++;
        }
        else
        {
            ++ji;
        }
    }
    printf("%d %d", ji, ou);
    return 0;
}