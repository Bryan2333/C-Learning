//字符串逆序

#include <stdio.h>
#define MAXM 80

int main(void){
    int cnt = 0;
    char str;
    char test[MAXM];
    scanf("%c", &str);
    for(int i = 0; str != '\n'; i++)
    {
        test[i] = str;
        cnt++;
        scanf("%c", &str);
    }
    for(int i = 1; i <= cnt; i++)
    {
        printf("%c", test[cnt - i]);
    }
    printf("\n");
    return 0;
}