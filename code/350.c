#include "stdio.h"
void main(){
    int num=100;
//    去变量的地址 用&
//    &num表示num的起始地址
    printf("%p\n",&num);

//    需求：定义一个指针变量 保存num的地址
//    在定义的时候 *说明p是指针变量，而不是普通变量
    int *p=NULL;
    printf("%d\n", sizeof(p));
//    num的地址 与p建立关系
    p=&num;
    printf("num=%d\n",num);
//    使用中 *p表示取p保存的地址编号 对应空间的内容
    printf("*p=%d",*p);
}