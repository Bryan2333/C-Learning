#include <stdio.h> 

int main(void){ 
    int a[10]; 
    int b[10]; 
    int c[10]; 
    for(int i = 0, j = 1; i < 10; ++i, ++j) 
    { 
        a[i] = j; 
        b[i] = j * 10; 
        c[i] = a[i] + b[i]; 
        printf("%d ", c[i]); 
    }
    printf("\n"); 
    return 0;
}