//Fuck PTA
#include <stdio.h>

int main(void){
    int n, abstract, j = 0;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 1; i < n; i++)
    {
        abstract = a[i] - a[i-1];
        if(j < 2){
            printf("%d ", abstract);
        }else if(j == 2){
            printf("%d", abstract);
        }
        j++;
        if(j % 3 == 0){
            printf("\n");
            j = 0;
        }
    }
    return 0;
}