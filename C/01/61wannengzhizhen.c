//
// Created by shuhongfan on 2020/10/29.
//

#include <stdio.h>

int main(){
    int a=10;
//    万能指针可以接受任意类型的内存地址
    void * p=&a;
//    在通过万能指针修改变量的值时 需要找到变量对应的指针类型
    *(int*)p=100;
    printf("万能指针在内存占的字节大小：%d\n",sizeof(void *));
    printf("万能指针在内存占的字节大小：%d\n",sizeof(void *));
}