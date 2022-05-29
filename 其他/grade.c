/* 判断一个分数是否及格 */
#include <stdio.h>

int main(void){
    int grade;
    printf("请输入你的分数：");
    scanf("%d", &grade);
    if(grade >= 60){
        printf("你及格了\n");
    }
    else{
        printf("你不及格\n");
    }
    return 0;
}