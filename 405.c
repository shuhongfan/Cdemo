//
// Created by shuhongfan on 2021/6/9.
//

#include <stdio.h>
#include <math.h>
#define PI 3.1415
int main(){
    double r=1.5,h=3,c,s,sq,vq,vz;
    c=2*PI*r;
    s=PI*pow(r,2);
    sq=4*PI*pow(r,2);
    vq=4*PI*pow(r,3)/3;
    vz=s*h;
    printf("c=%f\ns=%f\nsq=%f\nvq=%f\nvz=%f",c,s,sq,vq,vz);
}