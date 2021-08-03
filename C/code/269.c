//
// Created by shuhongfan on 2021/4/8.
//

#include "stdio.h"

void main(){
    int a=100,b=10;
    int *pointer_1,*pointer_2;
    pointer_1=&a;
    pointer_2=&b;
    printf("a=%d,b=%d\n",a,b);
    printf("*pointer_1=%d,*pointer_2=%d\n",*pointer_1,*pointer_2);
}