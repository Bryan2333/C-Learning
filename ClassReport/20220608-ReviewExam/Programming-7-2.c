/* 本题要求编写程序将一个百分制成绩转换为五分制成绩。转换规则：

大于等于90分为A；
小于90且大于等于80为B；
小于80且大于等于70为C；
小于70且大于等于60为D；
小于60为E。

输入在一行中给出一个整数的百分制成绩。 在一行中输出对应的五分制成绩。

 */

#include <stdio.h>

int main(void)
{
    int score;
    char grade;
    scanf("%d", &score);
    
    switch(score/10)
    {
        case 10:
            grade = 'A'; break;
        case 9:
            grade = 'A'; break;
        case 8:
            grade = 'B'; break;
        case 7: 
            grade = 'C'; break;
        case 6:
            grade = 'D'; break;
        default:
            grade = 'E'; break;
    }
    
    printf("%c", grade);
    return 0;
}
