#include <stdio.h>

int main(void){
    int test, min, temp;
    scanf("%d", &min);
    do{
        scanf("%d", &test);
        if(test < min){
            temp = min;
            min = test;
        }
    }while(test > temp);
    printf("%d\n", min);
    return 0;
}