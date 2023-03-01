#include <stdio.h>
#include <stdlib.h>

typedef struct EMPLOYEE
{
    char *name;
} emp;

typedef struct NODE
{
    struct NODE *prev;
    struct EMPLOYEE *emp;
    struct NODE *next;
} node;


int main(void)
{

    node *node1 = (node*)malloc(sizeof(node));
    emp *emp1 = (emp*)malloc(sizeof(emp));
    node1->emp = emp1;
    node1->prev = NULL;
    node1->next = NULL;
    emp1->name = "张三";

    node *node2 = (node*)malloc(sizeof(node));
    emp *emp2 = (emp*)malloc(sizeof(emp));
    node2->emp = emp2;
    node1->next = node2;
    node2->prev = node1;
    node2->next = NULL;
    emp2->name = "李四";

    node *node3 = (node*)malloc(sizeof(node));
    emp *emp3 = (emp*)malloc(sizeof(emp));
    node3->emp = emp3;
    node2->next = node3;
    node3->prev = node2;
    node3->next = NULL;
    emp3->name = "王五";


    node *begin = node1;
    while (begin != NULL)
    {
        printf("%s\n", begin->emp->name);
        begin = begin->next;
    }

    begin = node1;
    node1->next = node3;
    node3->prev = node1;
    printf("\n删除node2后\n");
    while (begin != NULL)
    {
        printf("%s\n", begin->emp->name);
        begin = begin->next;
    }

    return 0;
}
