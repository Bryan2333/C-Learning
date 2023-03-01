#include <stdio.h>

int main(void)
{
    int array[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("&[%d][%d] = %p\n", i, j, &array[i][j]);
        }
    }

    printf("\n");

    printf("array = %p\n", array);
    printf("&array[0][0] = %p\n", &array[0][0]);

    printf("array + 1 = %p\n", array + 1);
    printf("&array[1][0] = %p\n", &array[1][0]);

    printf("*(array + 1) = %p\n", *(array + 1));

    printf("*(*(array + 1)) = %p\n", *(*(array + 1)));

    return 0;
}