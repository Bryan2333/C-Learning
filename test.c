#include <math.h>
#include <stdio.h>

int main (void){
	int a,i,b;
	scanf("%d",&a);
	for(i=3;i<0;i--){
		int f=pow((10),i);
		b=a/f;
		if(b==0){
			printf("");
		}else{
			printf("%d",b);
			a=a%f;
		}
	}
	return 0;
}
