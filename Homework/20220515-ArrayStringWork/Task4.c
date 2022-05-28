// 求矩阵各行元素之和

#include <stdio.h>

int main(void){
    int m, n, rowSum = 0;
    scanf("%d %d", &m, &n);
    int test[m][n];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &test[i][j]);
        }
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            rowSum += test[i][j];
        }
        printf("%d\n", rowSum);
        rowSum = 0;
    }
    return 0;
}