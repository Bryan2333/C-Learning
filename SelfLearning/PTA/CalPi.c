#include <stdio.h>
double CalFenzi(double);
double CalFenmu(double);

int main(void) {
    
    double eps;
    
    scanf("%lf", &eps);
    
    double sum = 0;
    double item = 1;
    double fenzi = 0;
    double fenmu = 1;
    
    while (item > eps) {
        item = CalFenzi(fenzi) / CalFenmu(fenmu);
        sum = sum + item;
        fenzi = fenzi + 1;
        fenmu = fenmu + 2;
    }

    printf("%.6lf\n", sum*2);
    
}

double CalFenzi(double fenzi) {
    double k = 1;
    
    for (double i = 1; i <= fenzi; i++) {
        k = i * k;
    }

    return k;
}

double CalFenmu(double fenmu) {
    double k = 1;

    for (double i = 1; i <= fenmu; i = i + 2) {
        k = i * k;
    }

    return k;
}