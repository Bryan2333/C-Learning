#include <stdio.h>
#define MAXN 6
#define MAXM 6

int main(void){
    int col, i, j, m, n, row;
    int a[MAXM][MAXN];
    printf("Enter m, n ");
    scanf("%d%d", &m, &n);
    printf("Enter %d integers: ", m * n);
/*     for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    } */
    for(j=0;j<n;j++) //题目要求
    {
	    for(i=0;i<m;i++)
	    {
		scanf("%d",&a[i][j]);
	    }
    }
    row=col=0;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] > a[row][col])
            {
                row = i;
                col = j;
            }
        }
    }
    printf("max=a[%d][%d]=%d\n", row, col, a[row][col]);
    return 0;
}