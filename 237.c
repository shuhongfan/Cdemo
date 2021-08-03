#include <stdio.h>

struct y_m_d{
    int year;
    int month;
    int day;
} date;

int main(){
    int days(int year,int month,int day);
    int day_sum;
    printf("input year,month,day:");
    scanf("%d %d %d",&date.year,&date.month,&date.day);
    day_sum=days(date.year,date.month,date.day);
    printf("%d/%d is the %dth in %d",date.month,date.day,day_sum,date.year);
}

int days(int year,int month,int day){
    int i,sum=0;
    int day_tab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    for(i=1;i<month;i++) sum+=day_tab[i];
    sum+=day;
    if((year%4==0&&year%100!=0||year%400==0)&&month>=3) sum++;
    return sum;
}