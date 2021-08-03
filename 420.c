//
// Created by shuhongfan on 2021/6/10.
//

#include <stdio.h>
#include <math.h>
int main(){
    double money=1000,n=5,r1=0.015,r2=0.021,r3=0.0275,r5=0.03,r0=0.0035,m1,m2,m3,m4,m5;
    m1=money*(1+n*r5);
    m2=money*(1+2*r2)*(1+3*r3);
    m3=money*(1+3*r3)*(1+2*r2);
    m4=money*pow((1+1*r1),5);
    m5=money*pow((1+r0/4.0),4*n);
    printf("m1=%lf\nm2=%lf\nm3=%lf\n4=%lf\nm5=%lf",m1,m2,m3,m4,m5);
}