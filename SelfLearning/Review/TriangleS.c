//计算阴影面积

#include <stdio.h>
int main(void)
{
    int x, y;
    scanf("%d%d", &x, &y);
    
    int tixingS = (0.5 * ((100-x)+100) * y);
    int triangleS = (0.5 * (100-x) * (100-y));
    int yinS = (0.5 * 100 * 100) - triangleS - tixingS;
    printf("%d\n", yinS);
    return 0;
}