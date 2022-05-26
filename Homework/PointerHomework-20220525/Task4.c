//利用函数在数组中查找指定的元素

#include <stdio.h>
#define MAXN 10

int search( int list[], int n, int x );
    
int main()
{
    int i, index, n, x;
    int a[MAXN];

    scanf("%d", &n);
    for( i = 0; i < n; i++ )
        scanf("%d", &a[i]);
    scanf("%d", &x);
    index = search( a, n, x );
    if( index != -1 )
        printf("index = %d\n", index);
    else
        printf("Not found\n");
            
    return 0;
}

/* 你的代码将被嵌在这里 */
int search( int list[], int n, int x )
{
    int targetIndex;
    for(int i = 0; i < n; i++)
    {
        if(x == list[i])
        {
            targetIndex = i;
            break;
        }
    }
    if(targetIndex < n) //如果下标小于数组长度，即查找的元素在数组内
        return targetIndex;
    else
        return -1;
}