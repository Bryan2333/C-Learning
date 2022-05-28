#include <stdio.h>

int main(void)
{
    char strA[] = "test\n"; 
    //通过字符数组宣告定义的字符串可读写，但是不能通过整体赋值修改内容
    char *strB = "teststrB\n";
    /* 通过字符指标宣告定义的字符串，不能修改其中单个字符的内容。但可以整体赋值修改内容,
    更准确的说，是将字符指标指向另一个字符串*/
    

    printf(strA);
    printf(strB);

    //strA[0] = "T"; 会编译报错
    strB = "strBtest\n";
    printf(strB);

    return 0;
}