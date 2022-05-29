//const修饰符与字符指标

#include <stdio.h>

int main(void)
{
    char strA[] = "HelloA\n";
    char *strB = "HelloB\n";
    const char *strC = "HelloC\n";

    strA[0] = 'A';
    //strB[0] = "B"; //未定义行为
    //strC[0] = "C" //编译错误

    //strA = strB; (char []) = (char *)
    //strA = strC; (char []) = (const char *)
    strB = strA; //(char *) = (char [])
    strC = strA; //(const char *) = (char [])
    strC = strB; //(const char *) = (char *)
    printf(strB);
    return 0;
}