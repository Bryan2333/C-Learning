#include <stdio.h>
#include <math.h>

int main(void){
    float x,f;
    int i;
    for (i=0; i<3; ++i){
        scanf("%f", &x);
        if(x<0){
            f = fabs(x + 1);
        }
        else if(0 <= x && x <=5){
            f = 2 * x + 1;
        }
        else{
            f = sin(x) + 5;
        }
        printf("x=%.2f,y=%.2f", x, f);
    }
}