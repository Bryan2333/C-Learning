#include <stdio.h>

int main(void){
    int payprice;
    double totalprice;
    printf("请输入您的付款金额: ");
    scanf("%d", &payprice);
    if(payprice < 500){ /* 付款金额小于500元 */
        totalprice = payprice;
    }
    else if(payprice >= 500 && payprice < 1000){ 
        totalprice = payprice * 0.95;
    }
    else if(payprice >= 1000 && payprice < 2000){
        totalprice = payprice * 0.9;
    }
    else if(payprice >=2000 && payprice < 3000){
        totalprice = payprice * 0.85;
    }
    else{ /* 付款金额大于3000元 */
        totalprice = payprice * 0.8;
    }
    printf("您的实付金额为：%.2lf元\n", totalprice);
    return 0;
}