//
// Created by shuhongfan on 2021/4/5.
//

#include "stdio.h"
#include "math.h"
void main(){
    double a,b,c,area,s;
    printf("���������߳����Զ��Ÿ�����");
    scanf("%lf,%lf,%lf",&a,&b,&c);
    s=(a+b+c)/2.0;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("�����ε����Ϊ��%.2lf",area);
}