//
// Created by shuhongfan on 2021/6/10.
//

#include <stdio.h>
#include <math.h>
int main(){
    double d=300000,p=6000,r=0.01,m;
    m=log10(p/(p-d*r))/log10(1+r);
    printf("%.1lf",m);
}