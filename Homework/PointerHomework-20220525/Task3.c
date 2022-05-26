//拆分实数的整数部分和小数部分

#include <stdio.h>

void splitfloat( float x, int *intpart, float *fracpart );

int main()
{
    float x, fracpart;
    int intpart;
    
    scanf("%f", &x);
    splitfloat(x, &intpart, &fracpart);
    printf("The integer part is %d\n", intpart);
    printf("The fractional part is %g\n", fracpart);
    
    return 0;
}

/* 你的代码将被嵌在这里 */
void splitfloat( float x, int *intpart, float *fracpart )
{
    //计算实数的整数部分
    float floatPart = 0;
    while(floatPart > 1)
    {
        floatPart = x / (10 * 1.0);
    }
    *fracpart = floatPart;
    *intpart = x - floatPart;
    // printf("%f\n", floatPart);
}