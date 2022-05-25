#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[100];
    char str2[4];
    char str3[3];
    printf("Please enter a string: ");
    gets(str1);
    strcpy(str2,str1+3);
    strcat(str2, str3);
    puts(str2);
    return 0;
}