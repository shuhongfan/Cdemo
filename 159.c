#include "stdio.h"

int main(){
    int leap(int);
    int sum_days(int,int);
    int year,month,day,days=0;
    scanf("%d,%d,%d",&year,&month,&day);
    days=sum_days(month,day);
    if(leap(year)) days++;
    printf("%d",days);
}

int leap(int year){
    return (year%4==0&&year%100!=0||year%400==0);
}
int sum_days(int month,int day){
    int i,day_tabs[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    for(i=1;i<month;i++) day+=day_tabs[i];
    return day;
}