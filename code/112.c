#include <stdio.h>

int main(){
    int year;
    printf("请输入年份：");
    scanf("%d\n",&year);
    while(year!=0){
        (year%4==0&&year%100!=0)||year%400==0?printf("闰年\n"):printf("不是闰年\n");
        scanf("%d\n",&year);
    }
}