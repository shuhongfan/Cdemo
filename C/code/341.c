//
// Created by shuhongfan on 2021/4/26 0026.
//

#include "stdio.h"
void main(){
    int a=10;
    int* p=&a;
    int** p1=&p;
    int*** p2=&p1;
    int**** p3=&p2;
    printf("%d",****p3);
}