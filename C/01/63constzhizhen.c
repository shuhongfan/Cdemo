//
// Created by shuhongfan on 2020/10/29.
//

#include <stdio.h>

int main(){
    int a=10;
    int b=20     ;
//    const 修饰指针类型 修饰指针变量 只读指针
    const int* const p=&a;
    int** pp=&p;
    *pp=&b;
//    **pp=100;
    printf("%d\n",*p);
}
