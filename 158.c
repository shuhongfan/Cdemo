#include "stdio.h"

int main(){
    int i,year,month,day,sum=0,day_table[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d,%d,%d",&year,&month,&day);
    sum+=day;
    for(i=1;i<month;i++) sum+=day_table[i];
    if((year%4==0&&year%100!=0||year%400==0)&&month>=3) sum++;
    printf("%d / %d / %d = %d",year,month,day,sum);
}