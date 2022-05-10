//求整数序列中出现次数最多的数
#include <stdio.h>
 
int main()
{
	int n;
	scanf("%d",&n);
	int temp[n];
	for(int i = 0;i < n; i++)
	{
		scanf("%d",&temp[i]);
	}
	int a[n];//记录次数的数组 
	for(int i = 0; i < n; i++)
	{
		int count = 0;
		for(int j = 0; j < n ;j++)
		{
			if(temp[i] == temp[j]){
				count++;
				a[i]=count;
			}
		}
	}
	int ret;
	int max;
	for(int i = 0;i < n;i++){
		max = a[0];
		if(a[i] >= max){ 
			max = a[i];
			ret = i;
		} 
	}
	printf("%d %d",temp[ret],a[ret]);
	
	return 0;
}