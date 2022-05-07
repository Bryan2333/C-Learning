#include <stdio.h>

int main(void){
    int pearNum = 1, days;
    for(days = 9; days >= 1; days--)
    {
        pearNum = (pearNum + 1) * 2;
//        printf("%d\n", pearNum);
    }
    printf("%d\n", pearNum);
    return 0;
}