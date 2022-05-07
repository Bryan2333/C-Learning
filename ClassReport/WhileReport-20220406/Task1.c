//使用while函数来求学生成绩的最高分

#include <stdio.h>

int main(void){
    int grade, i = 1;
    double score, max;
    scanf("%lf", &score);
    max = score;
    while(score >= 0)
    {
        if(score > max)
        {
            max = score;
        }
        scanf("%lf", &score);
    }
    printf("最高分为%lf\n", max);
    return 0;
}