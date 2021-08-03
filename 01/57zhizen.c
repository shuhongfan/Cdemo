//
// Created by shuhongfan on 2020/10/29.
//

#include <stdio.h>

int main(){
//    定义指针变量存储变量地址
    int a=10;
//    &是取地址符号 升维度
//    *是取值符号  降维度
    int* p;
    p=&a;
//    通过指针简介改变变量的值
    *p=100;
    printf("%p\n",&a);
    printf("%p\n",p);


    printf("%d\n",a);
    printf("%d\n",*p);

//    所有指针类型存储的都是内存地址 内存地址都是一个无符号十六进制整数
//  指针大小     32位  4个字节  64位 8个字节大小
    printf("%d\n",sizeof(int *));
    printf("%d\n",sizeof(char *));
    printf("%d\n",sizeof(short *));
    printf("%d\n",sizeof(long *));
    printf("%d\n",sizeof(long long *));
    printf("%d\n",sizeof(float *));
    printf("%d\n",sizeof(double *));
}