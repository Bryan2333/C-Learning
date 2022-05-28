#include <stdio.h>

int main(void){
    int i, j, n, sum = 0;
    int a[6][6];

    printf("Input n: ");
    scanf("%d", &n);
    printf("Input Array Number: \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++) 
        {
            //不要最后一行和最后一列及左下角到右上角对角线值
            if(i != n-1 && j != n-1 && i + j != n-1)
            {
                sum += a[i][j];
            }
        }
    }

    //打印元素和
    printf("sum=%d\n",sum);
    return 0;
}
