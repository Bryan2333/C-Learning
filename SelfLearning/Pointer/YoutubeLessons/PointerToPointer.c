#include <stdio.h>

int main(void)
{
    int a = 10;

    int *p = &a;

    int **q = &p;

    int ***r = &q;

    // p -> a

    // q -> p

    // r -> q

    printf("&a = %lu\n", &a);
    printf("*p = %lu\n", *p);
    printf("*q = %lu\n", *q);
    printf("*(*q) = %lu\n", *(*q));
    printf("*(*r) = %lu\n", *(*r));
    printf("*(*(*r))= %lu\n", *(*(*r)));

    return 0;
}