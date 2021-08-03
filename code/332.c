//
// Created by shuhongfan on 2021/4/25 0025.
//

#include "stdio.h"
void main(){
    int a=10;
    int* p=&a;
    *p=100;
    printf("%d\n",*p);
    printf("%d\n", sizeof(p));
}