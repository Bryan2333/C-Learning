#include "StructConstructor.h"

int main(void)
{
    emp *emp1 = (emp*)malloc(sizeof(emp));
    emp_constructor(emp1, "张三", 23, 12000.5);

    emp_setName(emp1, "李四");
    printf("emp1.name = %s\n", emp_getName(emp1));

    emp_setSalary(emp1, 8055.12);
    printf("%s.salary = %lf\n", emp_getName(emp1), emp_getSalary(emp1));

    emp *emp2 = (emp*)malloc(sizeof(emp));
    emp_constructor(emp2, "smith", 35, 23000.5);
    
/*     int *emp1AgeP = &(emp1->age);
    double *emp1SalaryP = &(emp1->salary);
    printf("%d\n", sizeof(int));
    printf("%p\n", emp1AgeP);
    printf("%p\n", emp1SalaryP);
    printf("%lf\n", *(double *)(emp1AgeP + 2)); */

    emp *emp3 = (emp*)malloc(sizeof(emp));
    emp_constructor(emp3, "peter", 27, 5000);

    /* node *begin = node1;
    while (begin != NULL)
    {
        printf("%s\n", begin->emp->name);
        begin = node_getNext(begin);
    } */

    manager *manager1 = (manager*)malloc(sizeof(manager));
    manager_constructor(manager1, "tim", 37, 180.55, 100000);
    manager_setName(manager1, "TOM");
    manager_setBonus(manager1, 12000);
    printf("name = %s\n", manager_getName(manager1));
    printf("%s.salary = %.2lf\n", manager_getName(manager1), manager_getSalary(manager1));

    worker *worker1 = (worker*)malloc(sizeof(worker));
    worker_constructor(worker1, "milan", 38, 120000, 50000);
    worker_setAnnual(worker1, 5000.55);
    printf("%s.annual = %.2lf\n", worker_getName(worker1), worker_getAnnual(worker1));

    return 0;
}