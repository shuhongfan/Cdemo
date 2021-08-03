//
// Created by shuhongfan on 2021/6/13.
//

#include <stdio.h>

int main(){
    int a[10], *p1, *p2;
    p1=a;
    p2=&a[5];
    printf("%d",p2-p1);
}