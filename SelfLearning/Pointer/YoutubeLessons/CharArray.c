#include <stdio.h>
#include <string.h>


int main(void)
{

    // \0 在C语言中是字符串结尾的标识，不会算入字符串长度
    char c[20] = "JOHN";
    // c[0] = 'J';
    // c[1] = 'O';
    // c[2] = 'H';
    // c[3] = 'N';
    // c[4] = '\0';
    

    printf("%s\n", c);

    printf("Size in bytes = %lu\n", sizeof(c));
    int len = strlen(c); 
    printf("Length = %d\n", len);

    return 0;
}