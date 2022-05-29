#include <stdio.h>

int main(void){
    int a[4][6];
    for(int i = 0; i < 4; ++i)
    {
        a[i][5] = 0;
        for(int j = 0; j < 5; ++j)
        {
            scanf("%d", &a[i][j]);
            a[i][5] += a[i][j]; 
        } 
        a[i][5] = a[i][5] / 5; //每行输入完前五列就计算平均值
    }
    for(int i = 0; i < 4; ++i)
    {
        int x = 0;
        for(int j = 0; j < 6; ++j)
        {
            printf("%d ", a[i][j]);
            x++;
            if(x == 6)
            {
                printf("\n");
                x = 0;
            }
        }
    }
    return 0;
}