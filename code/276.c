//
// Created by shuhongfan on 2021/4/14.
//

#include "stdio.h"
void main(){
    char a[3],b[]="China";
    a=b; //数组之间拷贝不能直接使用a=b,而是可以使用字符串拷贝函数strcpy
    printf("%s",a);
}