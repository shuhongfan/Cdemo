//
// Created by shuhongfan on 2021/4/5.
//

#include "stdio.h"

void main(){
    double h,s;
    printf("�����뻪�϶ȣ�");
    scanf("%lf",&h);
    s=5.0/9*(h-32);
    printf("����%.2lf�ȵ�������%.2lf��",h,s);
}