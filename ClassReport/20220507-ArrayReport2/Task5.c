#include<stdio.h>
int day_of_year(int year, int month, int day);

int main(void){
    int year, month, day;
    scanf("%d %d %d", &year, &month, &day);
    printf("%d\n",(day_of_year(year, month, day)));
    return 0;
}
int day_of_year(int year, int month, int day)
{
    int i, leap; 
    int tab[2][13]={
        {0,31,28,31,30,31,30,31,31,30,31,30,31}, 
        {0,31,29,31,30,31,30,31,31,30,31,30,31} 
    };
    leap = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0); 
    for(i = 1; i < month ; ++i){
        day += tab[leap][i];
    } 
    
    return day;
}