//统计学生平均成绩与及格人数
#include <stdio.h>

int main(void){
    int grade, n, count = 0, sum = 0;
    double average;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &grade);
        sum = sum + grade;
        average = sum * 1.0 / n;
        if(grade >= 60)
        {
            count++;
        }
    }
    printf("average = %.1lf\ncount = %d", average, count);
    return 0;
}