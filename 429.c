//
// Created by shuhongfan on 2021/6/11.
//

#include <stdio.h>

int main(){
    float i,t1,t2,t4,t6,t10,sum;
    t1=100000*0.1;
    t2=t1+100000*0.075;
    t4=t2+100000*0.05;
    t6=t4+100000*0.03;
    t10=t6+400000*0.015;
    scanf("%f",&i);
    if(i<=100000) sum=i*0.1;
    else if(i<=200000) sum=t1+(i-100000)*0.075;
    else if(i<=400000) sum=t2+(i-200000)*0.05;
    else if(i<=600000) sum=t4+(i-400000)*0.03;
    else if(i<=1000000) sum=t6+(i-600000)*0.015;
    else sum=t10+(i-1000000)*0.01;
    printf("sum=%f",sum);
}