#include <stdio.h>

int main(void){
    int letter = 0, digit = 0, blank = 0, other = 0;
    char test;
    for(int i = 0; i < 10; i++)
    {
        scanf("%c", &test);
        if((test >= 'A' && test <= 'Z') || (test >= 'a' && test <= 'z'))
        {
            letter++;
        }
        else if(test == ' ' || test == '\n')
        {
            blank++;
        }
        else if(test >= '0' && test <= '9')
        {
            digit++;
        }
        else
        {
            other++;
        }
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
    return 0;
}