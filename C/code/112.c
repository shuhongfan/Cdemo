#include <stdio.h>

int main(){
    int year;
    printf("��������ݣ�");
    scanf("%d\n",&year);
    while(year!=0){
        (year%4==0&&year%100!=0)||year%400==0?printf("����\n"):printf("��������\n");
        scanf("%d\n",&year);
    }
}