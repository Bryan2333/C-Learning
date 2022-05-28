//const修饰符

#include <stdio.h>

int main(void)
{
    int a = 3;
    const int b = 5;
    const int arrayC[] = {3, 6, 10};  
    //b = 6; 会编译报错
    printf("a = %d, b = %d\n", a, b);
    for(int i = 0; i < 3; i++)
    {
        printf("%d ", arrayC[i]);
        if(i == 2)
            printf("\n");
    }
    return 0;
}