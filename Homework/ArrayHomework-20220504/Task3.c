#include <stdio.h>

int main(void){
    int n, max = 0, min = 0;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i< n; i++) //先找到最大值并交换位置
    { 
        if(a[max] < a[i])
        {
            max = i;
        }
    }
    int temp2 = a[n-1];
    a[n-1] = a[max];
    a[max] = temp2;
    for(int i = 0; i < n; i++) //再找到最小值交换位置
    { 
        if(a[min] > a[i])
        {
            min = i;
        }
    }
    int temp1 = a[0];
    a[0] = a[min];
    a[min] = temp1;
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}