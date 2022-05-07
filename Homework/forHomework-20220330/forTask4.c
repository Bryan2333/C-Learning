//统计学生成绩
#include <stdio.h>

int main(void){
    int grade, n, A = 0, B = 0, C = 0, D = 0, E = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &grade);
        if(grade >= 90)
        {
            A++;
        }
        else if(grade < 90 && grade >= 80)
        {
            B++;
        }
        else if(grade < 80 && grade >= 70)
        {
            C++;
        }
        else if(grade < 70 && grade >= 60)
        {
            D++;
        }
        else
        {
            E++;
        }
    }
    printf("%d %d %d %d %d", A, B, C, D, E);
}