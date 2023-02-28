#include <stdio.h>
#define MAXM 80

int main(void){
    int wordNum = 1;
    char test[MAXM];
    char str;
    scanf("%d", &str);
    for(int i = 0; str != '\0'; ++i)
    {
        test[i] = str;
        if(str == ' ')
        {
            wordNum++;
        }
        scanf("%c", &str);
    }
    printf("%d\n", wordNum);
    return 0;
}