//
// Created by shuhongfan on 2021/6/15.
//

#include <stdio.h>
int leap(int year){
    int leap;
    leap=year%4==0&&year%100!=0||leap%400==0;
    return leap;
}
int sum_day(int month,int day){
    int day_tab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int i;
    for(i=1;i<month;i++)
        day+=day_tab[i];
    return day;
}
int main(){
    int year,month,day,days;
    scanf("%d %d %d",&year,&month,&day);
    days= sum_day(month,day);
    if(leap(year)&&month>=3) days++;
    printf("%dth day in %d/%d/%d",days,year,month,day);
}