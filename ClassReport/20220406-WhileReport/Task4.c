//任务4
#include <stdio.h>

int main(void){
    int j = 0, grade;
    scanf("%d", &grade);
    do
    {   
        printf("%d ", grade);
        ++j;
        if(j == 3)
        {
            printf("\n");
            j = 0;
        }
        scanf("%d", &grade);
    }while(grade != -1);
    printf("\n");
    return 0;
}