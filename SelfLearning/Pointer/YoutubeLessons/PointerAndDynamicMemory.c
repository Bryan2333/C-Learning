#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // num1储存在栈中
    int num1 = 0;

    // num1P指向的整数存储在堆中
    int *num1P = (int*)(malloc(sizeof(int)));
    *num1P = 0;

    // malloc void* malloc(size_t size);
    int *p1 = (int*)(malloc(5 * sizeof(int)));

    // calloc void* calloc(size_t num, size_t size)
    // calloc 和 malloc 相似，但是 calloc 会将内存块上的数据初始化为0
    int *p2 = (int*)(calloc(5, sizeof(int)));

    // realloc void* realloc (void* ptr, size_t size);
    // realloc 用于调整现有内存块的大小
    p2 = (int*)(realloc(p2, 10 * sizeof(int)));

    // 此时的 realloc 相当于 malloc
    int *p3 = (int*)(realloc(NULL, 10 * sizeof(int)));

    // for (int i = 1; i <= 10; i++)
    // {
    //     p2[i-1] = i;
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d ", p2[i]);
    // }

    char *str1 = (char*)(malloc(50 * sizeof(char)));
    strcpy(str1, "Hello, World!");
    printf("%s\n", str1);

    char *str2 = "Hello, Heap Memory";
    // printf("size of str2 = %lu\n", strlen(str2)+1);
    strcpy(str1, str2);

    // for (int i = 0; i < 50; i++)
    // {
    //     printf("%c ", *(str1+i));
    // }
    // printf("\n");
    printf("%s\n", str1);

    free(num1P);
    free(p1);
    free(p2);
    free(p3);
    free(str1);

    return 0;

}