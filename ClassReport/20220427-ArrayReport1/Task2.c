#include <stdio.h> 

int main(void){ 
    int n; 
    printf("n = "); 
    scanf("%d", &n); 
    int a[n]; 
    for(int i = 0; i < n; ++i) 
    { 
        scanf("%d", &a[i]); 
    }
    int max = 0; 
    for(int i = 0; i < n; ++i) 
    { 
        if(a[i] > a[max])
        { 
            max = i; 
        } 
    }
    printf("最大值为%d 最小下标%d\n", a[max], max); 
    return 0; 
}