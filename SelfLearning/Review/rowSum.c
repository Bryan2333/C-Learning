/* 本题要求编写程序，求一个给定的m×n矩阵各行元素之和。
输入第一行给出两个正整数m和n（1≤m,n≤6）。随后m行，每行给出n个整数，其间以空格分隔。
每行输出对应矩阵行元素之和。 */

#include <stdio.h>

int main(void)
{
    int m, n;
    scanf("%d %d", &m, &n);
    
    int array[m][n];
    int rowSum[m];
    
    
    for(int i = 0; i < m; i++)
    {
        rowSum[i] = 0;
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &array[i][j]);
            rowSum[i] += array[i][j];
        }
    }
    
    for(int i = 0; i < m; i++)
    {
        printf("%d\n", rowSum[i]);
    }
    return 0;
}