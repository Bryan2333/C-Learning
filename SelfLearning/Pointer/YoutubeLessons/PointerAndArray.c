// 指针与数组
#include <stdio.h>

int main(void)
{
    int A[] = {2, 4, 5, 8, 1};

    // printf("%lu\n", A);
    // printf("%lu\n", &A[0]); 

    // printf("%d\n", *A);
    // printf("%d\n", A[0]);

    for (int i = 0; i < 5; i++)
    {
        printf("Address = %lu, Value = %d\n", &A[i], A[i]);
        printf("Address = %lu, Value = %d\n", A+i, *(A+i));
    }

    printf("Size of array A is %d\n", sizeof(A));

    return 0;
}