#include <stdio.h>
int main(void)
{ 	int a[3][2]={{1,2},{3,4},{5,6}};  	
  	int i=0,j=0,b[2][5]={0};

  	for(i=0; i<2; ++i)                   	
     	for(j=0; j<5; ++j)              	
			scanf("%d",&b[i][j]);      	
  	printf("Array a:\n");
  	for(i=0; i<3; ++i)
   	{ 	for(j=0; j<2; ++j)  printf("%5d",a[i][j]);
      	printf("\n");                		
    }
  	printf("Array b:\n");
  	for(i=0; i<2; ++i)
   	{ 	for(j=0; j<5; ++j) printf("%5d",b[i][j]);
      	printf("\n");
    }
	return 0;
}
