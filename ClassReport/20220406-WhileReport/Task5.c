//任务5

#include <stdio.h>

int main(void){
    int j, grade;
    for(j = 1; grade != -1; ++j)
    {
        scanf("%d", &grade);
        if(grade == -1)
        {
            break;
        }
        printf("%d ", grade);
        if(j == 3)
        {
            printf("\n");
            j = 0;
        }
    }
    printf("\n");
    return 0;
}