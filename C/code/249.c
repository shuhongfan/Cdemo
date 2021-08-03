//
// Created by shuhongfan on 2021/4/5.
//

#include "stdio.h"

void main(){
    double h,s;
    printf("请输入华氏度：");
    scanf("%lf",&h);
    s=5.0/9*(h-32);
    printf("华氏%.2lf度等于摄氏%.2lf度",h,s);
}