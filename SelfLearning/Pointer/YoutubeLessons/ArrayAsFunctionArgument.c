// 数组作为函数参数
#include <stdio.h>
int SumOfElement(int [], int);
void DoubleElement(int [], int);

int main(void)
{
    int A[] = {2,4,5,8,1};
    int size = sizeof(A) / sizeof(A[0]);
    // int total = SumOfElement(A, size);
    // printf("MAIN - size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
    // printf("sum of elements = %d\n", total);

    DoubleElement(A, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", A[i]);
    }

    return 0;
}

/*
    
    当数组作为函数参数进行传递时，并不会将整个数组传递过去，
    数组变量 会从 数组类型 自动转换为 指针类型，并指向数组的第一个元素，
    因而传递的实际上是数组第一个元素的地址，
    (int A[]) 会被解释成 (int *A)，
    所以数组作为函数参数进行传递，是按引用传递，而不是按值传递

 */

int SumOfElement(int A[], int size)
{
    int sum = 0;
    // printf("SOE - size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
    for (int i = 0; i < size; i++)
    {
        sum += A[i];
    }

    return sum;
}

void DoubleElement(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        A[i] = A[i] * 2;
    }
}
