//
// Created by shuhongfan on 2021/4/5.
//

#include "stdio.h"

void main(){
    double x,y;
    printf("������X��ֵ��");
    scanf("%lf",&x);
    if (x>=10) y=3*x-11;
    else if(x>=1&&x<10) y=2*x-1;
    else if(x<1) y=x;
    printf("y��ֵΪ��%.2lf",y);
}