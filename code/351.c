//
// Created by shuhongfan on 2021/4/27 0027.
//

#include "stdio.h"
void main(){
    int num=10;
//    指针变量两种类型：自身的类型 指向的类型
//    自身的类型：在指针变量定义的时候，将变量名拖黑 剩下啥类型 指针变量就是啥类型
//        p自身的类型就是int *
//    指向的类型：在指针变量定义的时候 将变量名和离它最近的一个*一起拖黑 剩下啥类型 指针变量指向的的类型就会说啥类型
//        p指向的类型是int

//    指针变量指向的类型的作用：决定了指针变量 所取空间内容的宽度 决定了指针变量+1跳过的单位跨度
    int *p=NULL;
    p=&num;
//    指针变量的跨度
    printf("&num=%d\n",&num);
    printf("p=%d\n",p);
    printf("p+1=%d\n",p+1);

    char *p1=&num;
    printf("p1=%d\n",p1);
    printf("p1+1=%d\n",p1+1);

    printf("*p=%d\n",*p);
}