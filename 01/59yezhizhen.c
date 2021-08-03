//
// Created by shuhongfan on 2020/10/29.
//

#include <stdio.h>

int main(){
//    任意数值赋值给指针变量没有意义 就是野指针
//    野指针 指针变量指向一个未知空间
    int* p=100;
//    操作系统将0-255作为系统占用不允许访问操作
//    操作野指针应对的内存空间可能报错
    printf("%d\n",*p);

}