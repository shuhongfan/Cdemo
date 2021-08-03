//
// Created by shuhongfan on 2021/4/12.
//
#include "stdio.h"
void swap(int *x,int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
void  main(){
    int a=10,b=20;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    swap(p1,p2);
    printf("a=%d,b=%d",a,b);
}
