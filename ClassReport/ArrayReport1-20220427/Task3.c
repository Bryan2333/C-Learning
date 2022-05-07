#include <stdio.h> 

int main(void){ 
    int n; 
    printf("n = "); 
    scanf("%d", &n); 
    int a[n]; 
    for(int i = 1; i <= n; i++) 
    { 
        scanf("%d", &a[n - i]); 
    }
    for(int i = 0; i < n; i++) 
    { 
        printf("%d ", a[i]); 
    }
    printf("\n"); 
    return 0; 
}