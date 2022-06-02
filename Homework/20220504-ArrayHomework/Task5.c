#include <stdio.h>

int main(void){
    int n, abstract, j = 0;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 1; i < n; ++i)
    {
        abstract = a[i] - a[i-1];
        printf("%d", abstract);
        if(i % 3 != 0 && i < n-1)
        {
            printf(" ");
        }
        if(i % 3 == 0)
        {
            printf("\n");
        }
    }
    return 0;
}