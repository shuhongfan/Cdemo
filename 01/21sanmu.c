//
// Created by shuhongfan on 2020/10/26.
//

#include <stdio.h>

#define MAX(a,b) (a)>(b)?(a):(b)

int main(){
    int a=10;
    int b=20;
    int c=30;
    printf("���ֵΪ��%d\n",a>b?a:b);
    printf("���ֵΪ��%d\n",a>b?(a>c?a:c):(b>c?b:c));
    printf("���ֵΪ��%d\n",MAX(a,b));
}