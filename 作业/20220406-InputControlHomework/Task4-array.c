//念数字 用数组来实现

#include <stdio.h>

int main(void){
    int num, digit, j = 0;
    scanf("%d", &num);
    if(num < 0){
        num = -num;
        printf("fu ");
    }
    const int temp = num;
    do{ //统计该数字的位数
        digit = num % 10;
        ++j;
        num = num / 10;
    }while(num > 0);
    int numleng[j];
    num = temp;
    for(int i = 0; i < j; ++i) //将该数字的各个位数存入数组中
    {
        digit = num % 10;
        numleng[i] = digit;
        num = num / 10;
    }
    for(int z = j - 1; z >= 0; z--) //逆序输出
    {
        switch (numleng[z]){
            case 0 :
                printf("ling ");
                break;
            case 1 :
                printf("yi ");
                break;
            case 2 :
                printf("er ");
                break;
            case 3 :
                printf("san ");
                break;
            case 4 :
                printf("si "); 
                break;               
            case 5 :
                printf("wu ");
                break;
            case 6 :
                printf("liu ");
                break;
            case 7 :
                printf("qi ");
                break;
            case 8 :
                printf("ba ");
                break;
            case 9 :
                printf("jiu ");
                break;
        }
    }
    printf("\n");
    return 0;
}
