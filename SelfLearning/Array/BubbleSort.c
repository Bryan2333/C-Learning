//冒泡排序

#include <stdio.h>
void bubblesort(int array[], int length);

int main(void)
{
    int length;
    printf("Please enter the length of your array: ");
    scanf("%d", &length);
    int array[length];
    for(int i = 0; i < length; ++i)
    {
        scanf("%d", &array[i]);
    }
    bubblesort(array, length);
    for(int i = 0; i < length; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}

void bubblesort(int array[], int length)
{
    int temp;
    for(int i = 0; i < length-1; ++i)
    {
        for(int j = 0; j < length-1; ++j)
        {
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
