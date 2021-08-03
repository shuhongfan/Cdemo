#include <stdio.h>
#include <math.h>
#define PI 3.1415926
int main(){
    float r,h,l,s,sq,vq,vz;
    scanf("%f%f",&r,&h);
    l=2*PI*r;
    s=PI*pow(r,2);
    sq=4*PI*pow(r,2);
    vq=4.0/3.0*PI*pow(r,3);
    vz=PI*pow(r,2)*h;
    printf("周长：%.2f",l);
    printf("面积：%.2f",s);
    printf("表面积：%.2f",sq);
    printf("球体积：%.2f",vq);
    printf("圆柱体积：%.2f",vz);
    return 0;
}