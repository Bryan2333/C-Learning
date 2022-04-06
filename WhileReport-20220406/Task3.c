//任务3
#include <stdio.h>

int main(void){
    int j = 0, grade = 0, n, i = 1;
    printf("n = ");
    scanf("%d", &n); //输入成绩的个数
    int score[n]; //创建一个数组用来存储成绩
    scanf("%d", &score[0]);
    while(i < n)
    {
        scanf("%d", &score[i]);
        i++;
        if(i == n){
            i = 0;
            while(i < n){
            j = 0; //该行已有多少个数字
            while(j < 3 && i < n){
                printf("%d ", score[i]);
                i++;
                j++;
                if(j == 3){ //如果该行已有三个数字
                    printf("\n"); //则换行
                    }
                }
            }   
        }
    }
    printf("\n");
    return 0;
}