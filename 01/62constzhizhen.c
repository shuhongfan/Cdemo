//
// Created by shuhongfan on 2020/10/29.
//

#include <stdio.h>

int main(){
//    常量
    const int a=10;
    int* p=&a;
    *p=100;
    printf("%d\n",a);

    int b=10;
    int c=20;
    const int* pp = &b;
    pp=&c;
    printf("%d\n",*pp);
//    const修饰指针类型
//    可以修改指针变量的值
//    不可以修改指针指向内存空间的值

//    const修饰指针变量
//    可以修改指针指向内存空间的值
//    不可以修改指针变量的值
}