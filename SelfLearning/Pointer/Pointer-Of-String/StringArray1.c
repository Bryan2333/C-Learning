//字符串的定义
//字符串是指结尾字符为'\0'的字符数组

#include <stdio.h>
void str_print(char str[])
{
    // for(int i = 0; str[i] != '\0'; ++i)
    // {
    //     printf("%c", str[i]);
    // }  
    // printf("\n");
    printf("%s\n", str);
}

int main(void)
{
    // char str[] = {
    //     'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'
    //     };
    char str[6] = "Hello";
    str_print(str);
    return 0; 
}
