// 给定不超过6的正整数A，考虑从A开始的连续4个数字。请输出所有由它们组成的无重复数字的3位数。

#include <stdio.h>

int main(void) {
    int begin;

    scanf("%d", &begin);

    int end = begin + 4;
    int fund[4];
    for (int i = 0, k = begin; i < 4; i++) {
        fund[i] = k;
        k = k + 1;
    }

    int count = 0;
    int i = 0;
    

    return 0;
}
