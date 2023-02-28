#include <stdio.h>
#include <string.h>

void print(char*);
void print1(const char*);

int main(void)
{
    char c1[] = "Hello";

    char *c2 = NULL;
    c2 = c1;

    printf("size of c1 = %d\n", sizeof(c1));
    printf("sizeof of c2 = %d\n", sizeof(c2));
    // printf("size of char* = %d\n", sizeof(char*));
    printf("%s\n", c2);
    printf("length = %d\n", strlen(c2));

    print(c1);

    // print(c2);

    return 0;
}

void print(char *c)
{
    *c = 'A';
    while (*c != '\0')
    {
        printf("%c", *c);
        c++;
    }

    printf("\n");
}

void print1(const char *c)
{
    // *c = 'A';
    while (*c != '\0')
    {
        printf("%c", *c);
        c++;
    }
    printf("\n");
}