// 用do-while循环

#include <stdio.h>

int main(void){
    int j = 0, grade = 0, n, i = 0;
    printf("n = ");
    scanf("%d", &n); //输入成绩的个数
    int score[n]; //创建一个数组用来存储成绩
    do{
        scanf("%d", &score[i]);
        i++;
        if(i == n){
            i = 0;
            do{
            j = 0; 
            do{
                printf("%d ", score[i]);
                i++;
                j++;
                if(j == 3){ 
                    printf("\n");
                    }
                }while(j < 3 && i < n);
            }while(i < n); 
        }
    }while(i < n);
    printf("\n");
    return 0;
}