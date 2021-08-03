//
// Created by shuhongfan on 2021/4/5.
//

#include "stdio.h"

void main(){
    double x,y;
    printf("请输入X的值：");
    scanf("%lf",&x);
    if (x>=10) y=3*x-11;
    else if(x>=1&&x<10) y=2*x-1;
    else if(x<1) y=x;
    printf("y的值为：%.2lf",y);
}