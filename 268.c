//
// Created by shuhongfan on 2021/6/2.
//

#include <stdio.h>

int main(){
    int a=10,c=9,d;
    d=(--a!=c++)?--a:++c;
    printf("%d %d %d",a,c,d);
}