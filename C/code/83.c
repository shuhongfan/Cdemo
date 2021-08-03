#include <stdio.h>

int main(){
    float a,b,c,sum,avg,yushu;
    scanf("%f,%f,%f",&a,&b,&c);
    sum=a+b+c;
    avg=sum/3;
    yushu=(int)sum%3;
    printf("sum=%f,avg=%f,yushu=%f",sum,avg,yushu);
}