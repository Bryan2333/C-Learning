#include <stdio.h>

int main(void)
{
	int i, j, n;
	int arr[100];
	scanf("%d", &n);
	for (i = 0;i < n;++i)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 1;i < n;++i)
	{
		if (i == 4 || i == 1||i==7)
		{
			printf("%d", arr[i] - arr[i - 1]);
		}
		else {
			printf(" %d", arr[i] - arr[i - 1]);
			if (i % 3 == 0)
				printf("\n");
		}
	}
	return 0;
}