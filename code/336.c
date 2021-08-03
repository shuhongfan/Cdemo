//
// Created by shuhongfan on 2021/4/26 0026.
//

#include "stdio.h"
int a=10;
int* test(){
    return &a;
}
int add(int a,int b){
    return a+b;
}
void main(){
    int* p=test();
    printf("%d\n",p);
    printf("%d\n",&a);
    *p=123;
    printf("%d\n",*p);
    printf("%d\n",a);

    int sum= add(10,20);
    printf("%d\n",sum);
}