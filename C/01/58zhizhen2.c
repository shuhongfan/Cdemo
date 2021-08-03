//
// Created by shuhongfan on 2020/10/29.
//
#include <stdio.h>

int main(){
//    定义指针类型要一致
    char ch="a";
    int *p= &ch;
    *p=123456;
    printf("%p\n",p);
    printf("%p\n",&ch);
}