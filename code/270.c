//
// Created by shuhongfan on 2021/4/12.
//
#include "stdio.h"

void main(){
    int a,*p;
    p=&a;
    printf("%d\n",*p);
    *p=1;
    printf("%o",p);
}
