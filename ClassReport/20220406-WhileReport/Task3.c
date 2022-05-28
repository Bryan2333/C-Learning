//任务3
#include <stdio.h>

int main(void){
    int j = 0, grade;
    scanf("%d", &grade);
    while(grade != -1)
    {
        printf("%d ", grade);
        j++;
        if(j == 3)
        {
            printf("\n");
            j = 0;
        }
        scanf("%d", &grade);
    }
    return 0;
}