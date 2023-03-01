//找出数组中不同的数字
#include <stdio.h>

int main(void){ 
    int n, m; 
    printf("n = "); 
    scanf("%d", &n); 
    int a[n]; 
    for(int i = 0; i < n; ++i) 
    { 
        scanf("%d", &a[i]);
    }
    printf("m = "); 
    scanf("%d", &m); 
    int b[m]; 
    for(int i = 0; i < m; ++i) 
    { 
        scanf("%d", &b[i]); 
    }
    for(int i = 0; i < n; ++i) 
    { 
        int ifEqual = 0;
        for(int j = 0; j < m; ++j) 
        { 
            if(a[i] == b[j]) 
            { 
                ifEqual = 1; 
            } 
        }
        if(ifEqual == 0) 
        { 
            printf("%d\n", a[i]); 
        } 
    }
    return 0;
}