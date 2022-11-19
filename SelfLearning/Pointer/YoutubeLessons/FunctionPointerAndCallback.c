#include <stdio.h>
int Compare(int, int);
void BubbleSort(int [], int, int (*)(int, int));

int main(void)
{
    int array[] = {2,5,1,4,0,-1,-56};
    
    int arraySize = sizeof(array)/sizeof(array[0]);
    BubbleSort(array, arraySize, Compare);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}

void BubbleSort(int array[], int size, int (*Compare)(int, int))
{
    int i, j, temp;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size-i-1; j++)
        {
            if (Compare(array[j], array[j+1]) > 0)
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int Compare(int x, int y)
{
    if (x > y)
    {
        return 1;
    }
    else if (x < y)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}