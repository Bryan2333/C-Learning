//查询范围内的数字

#include <stdio.h>

int main(void)
{
    int i, n, L, R;
    printf("n = ");
    scanf("%d", &n);
    int array[n];
    for(i = 0; i < n; ++i)
    {
        scanf("%d", &array[i]);
    }

    printf("L R: ");
    scanf("%d %d", &L, &R);
    
    printf("Answers: ");
    for(i = 0; i < n; ++i)
    {
        if(L <= array[i] && array[i] <= R)
        {
            printf("%d ", array[i]);
        }
    }

    printf("\n");
    return 0;
}