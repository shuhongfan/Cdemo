//
// Created by shuhongfan on 2021/4/26 0026.
//

#include "stdio.h"

void main(){
    int a,b,c;
    a=10;b=50;c=30;
    if(a>b) a=b,b=c,c=a;
    printf("a=%d b=%d c=%d\n",a,b,c);
}