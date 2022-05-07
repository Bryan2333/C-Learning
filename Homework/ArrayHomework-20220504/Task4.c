#include <stdio.h>

int main(void){
    int num, max = 0;
    int a[1000];
    scanf("%d", &num);
    for(int i = 0; i < num; i++)
    {
        scanf("%d", &num);
        a[num] ++;
    }
    for(int i = 0; i < 1000; i++)
    {
        if(a[max] < a[i])
        {
            max = i;
        }
    }
    printf("%d %d\n", a[max], max);
    return 0;
}