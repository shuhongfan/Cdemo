//
// Created by shuhongfan on 2021/4/5.
//

#include "stdio.h"
#include "math.h"
void main(){
    double r,h,c,s,sq,vq,vz;
    printf("������뾶�͸ߣ�");
    scanf("%lf,%lf",&r,&h);
    c=2*M_PI*r;
    s=M_PI*pow(r,2);
    sq=4*M_PI*pow(r,2);
    vq=4*M_PI*pow(r,3)/3;
    vz=s*h;
    printf("�ܳ�=%.2f,���=%.2f,�����=%.2f,���=%.2f",c,s,sq,vq,vz);
}